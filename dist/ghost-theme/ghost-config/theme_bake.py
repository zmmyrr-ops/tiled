"""Compile static theme objects into ordinary TMX tiles for the existing Laya pipeline.

Explicit subset: finite orthogonal CSV maps; static tile layers and tile objects.
Unknown visual features fail instead of silently disappearing. Source maps are never changed.
"""
from __future__ import annotations
import copy
import hashlib
import math
from pathlib import Path
import xml.etree.ElementTree as ET
from PIL import Image, ImageOps

THEME_LAYERS = {'GhostTheme_Base', 'GhostTheme_Edges', 'GhostTheme_Scatter', 'GhostTheme_Props', 'GhostTheme_RoomLeaves', 'GhostTheme_Grass', 'GhostTheme_Components', 'GhostTheme_Scenes'}
VISUAL_LAYERS = {'Ground', 'Decorate'} | THEME_LAYERS
FLAGS = 0xF0000000
ALIGNMENTS = {'topleft':(0,0), 'top':(.5,0), 'topright':(1,0), 'left':(0,.5), 'center':(.5,.5), 'right':(1,.5), 'bottomleft':(0,1), 'bottom':(.5,1), 'bottomright':(1,1), 'unspecified':(0,1)}

def properties(element):
    return {p.get('name'):p.get('value',p.text or '') for p in element.findall('properties/property')}

def is_themed(root):
    props=properties(root)
    selected=props.get('ghost.mapTheme')
    return selected == 'autumn' if selected is not None else props.get('ghost.theme') == 'abandoned-v1'

class Renderer:
    def __init__(self, root, source: Path):
        if root.get('orientation') != 'orthogonal' or root.get('infinite','0') != '0':
            raise ValueError('主题导出目前只支持有限正交地图')
        self.root=root;self.source=source;self.tw=int(root.get('tilewidth'));self.th=int(root.get('tileheight'))
        self.width=int(root.get('width'));self.height=int(root.get('height'));self.tilesets=[];self.images={};self.tiles={}
        for ref in root.findall('tileset'):
            base=source.parent;ts=ref
            if ref.get('source'):
                path=(base/ref.get('source')).resolve();ts=ET.parse(path).getroot();base=path.parent
            self.tilesets.append((int(ref.get('firstgid')),ts,base))
        self.tilesets.sort(key=lambda x:x[0])

    def image(self,path):
        path=path.resolve()
        if path not in self.images:
            with Image.open(path) as im:self.images[path]=im.convert('RGBA')
        return self.images[path]

    def tile(self,gid):
        clean=gid & ~FLAGS
        if clean in self.tiles:return self.tiles[clean]
        matches=[ts for ts in self.tilesets if ts[0]<=clean]
        if not matches:raise ValueError(f'图块 {gid} 没有图集')
        first,ts,base=matches[-1];local=clean-first
        t=next((t for t in ts.findall('tile') if int(t.get('id'))==local),None)
        if t is not None and t.find('animation') is not None:raise ValueError('静态烘焙不支持动画图块，请使用运行时对象')
        offset=ts.find('tileoffset');ox=float(offset.get('x',0)) if offset is not None else 0;oy=float(offset.get('y',0)) if offset is not None else 0
        imnode=ts.find('image')
        if imnode is not None:
            cols=int(ts.get('columns'));w=int(ts.get('tilewidth'));h=int(ts.get('tileheight'));spacing=int(ts.get('spacing',0));margin=int(ts.get('margin',0))
            if local>=int(ts.get('tilecount')):raise ValueError(f'图块编号越界: {local}')
            x=margin+(local%cols)*(w+spacing);y=margin+(local//cols)*(h+spacing)
            im=self.image(base/imnode.get('source')).crop((x,y,x+w,y+h))
        else:
            imnode=t.find('image') if t is not None else None
            if imnode is None:raise ValueError(f'缺少图块图片: {local}')
            im=self.image(base/imnode.get('source')).copy()
            # TMX collection tiles may select a source rectangle (theme cover crop).
            if t.get('width') is not None and t.get('height') is not None:
                x=int(t.get('x',0));y=int(t.get('y',0));w=int(t.get('width'));h=int(t.get('height'))
                if w<=0 or h<=0 or x<0 or y<0 or x+w>im.width or y+h>im.height:
                    raise ValueError(f'图块裁切区域越界: {local}')
                im=im.crop((x,y,x+w,y+h))
        if imnode.get('trans'):
            color=tuple(bytes.fromhex(imnode.get('trans')));im.putdata([(*p[:3],0 if p[:3]==color else p[3]) for p in im.getdata()])
        info=(im,ox,oy,ts.get('objectalignment','bottomleft'));self.tiles[clean]=info;return info

    @staticmethod
    def flipped(im,gid):
        # TMX: diagonal swap first, followed by horizontal and vertical flips.
        if gid & 0x10000000:raise ValueError('正交地图包含不支持的六边形旋转标记')
        if gid & 0x20000000:im=im.transpose(Image.Transpose.TRANSPOSE)
        if gid & 0x80000000:im=ImageOps.mirror(im)
        if gid & 0x40000000:im=ImageOps.flip(im)
        return im

    @staticmethod
    def paste(canvas,im,x,y,rotation=0):
        # im top-left is relative to the Tiled object's pivot (x,y).
        canvas.alpha_composite(im,(round(x),round(y)))

    def object(self,canvas,obj,offset):
        if obj.get('visible','1')=='0':return
        if obj.get('template'):raise ValueError('请先分离设备模板再烘焙，当前版本只接受显式图块对象')
        if not obj.get('gid'):raise ValueError('主题显示对象必须引用图片图块')
        gid=int(obj.get('gid'));im,ox,oy,alignment=self.tile(gid);im=self.flipped(im,gid)
        w=float(obj.get('width',im.width));h=float(obj.get('height',im.height))
        if w<=0 or h<=0:return
        sx=w/im.width;sy=h/im.height
        im=im.resize((max(1,round(w)),max(1,round(h))),Image.Resampling.LANCZOS)
        ax,ay=ALIGNMENTS[alignment];left=-ax*w+ox*sx;top=-ay*h+oy*sy
        x=float(obj.get('x','0'))+offset[0];y=float(obj.get('y','0'))+offset[1]
        angle=math.radians(float(obj.get('rotation','0')));c=math.cos(angle);s=math.sin(angle)
        if abs(angle)<1e-10:
            self.paste(canvas,im,x+left,y+top);return
        corners=[(c*u-s*v,s*u+c*v) for u,v in [(left,top),(left+w,top),(left,top+h),(left+w,top+h)]]
        minx=math.floor(min(u for u,v in corners));miny=math.floor(min(v for u,v in corners));maxx=math.ceil(max(u for u,v in corners));maxy=math.ceil(max(v for u,v in corners))
        transformed=im.transform((maxx-minx,maxy-miny),Image.Transform.AFFINE,(c,s,c*minx+s*miny-left,-s,c,-s*minx+c*miny-top),Image.Resampling.BICUBIC)
        self.paste(canvas,transformed,x+minx,y+miny)

    def render(self):
        canvas=Image.new('RGBA',(self.width*self.tw,self.height*self.th))
        for layer in self.root:
            if layer.get('name') not in VISUAL_LAYERS:continue
            if layer.tag not in {'layer','objectgroup'}:raise ValueError('主题图层类型不受支持: '+layer.tag)
            if layer.get('tintcolor') or layer.get('parallaxx','1')!='1' or layer.get('parallaxy','1')!='1':raise ValueError('静态主题导出尚不支持图层着色或视差')
            # Legacy Ground/Decorate visibility is an authoring aid, as in export_display.
            if layer.get('name') in THEME_LAYERS and layer.get('visible','1')=='0':continue
            opacity=float(layer.get('opacity','1'));dest=canvas if opacity==1 else Image.new('RGBA',canvas.size)
            dx=float(layer.get('offsetx','0'));dy=float(layer.get('offsety','0'))
            if layer.tag=='layer':
                if layer.get('x','0')!='0' or layer.get('y','0')!='0':raise ValueError('不支持带格偏移的瓦片层')
                data=layer.find('data')
                if data is None or data.get('encoding')!='csv' or data.get('compression'):raise ValueError('主题导出要求 CSV 瓦片层')
                values=[int(v.strip()) for v in (data.text or '').replace('\n','').split(',') if v.strip()]
                if len(values)!=self.width*self.height:raise ValueError('瓦片层尺寸与地图不一致')
                renderorder=self.root.get('renderorder','right-down')
                xs=range(self.width-1,-1,-1) if renderorder.startswith('left') else range(self.width)
                ys=range(self.height-1,-1,-1) if renderorder.endswith('up') else range(self.height)
                for i in (y*self.width+x for y in ys for x in xs):
                    gid=values[i]
                    if not gid:continue
                    im,ox,oy,_=self.tile(gid);im=self.flipped(im,gid)
                    self.paste(dest,im,(i%self.width)*self.tw+ox+dx,(i//self.width+1)*self.th-im.height+oy+dy)
            else:
                objects=layer.findall('object')
                if layer.get('draworder','topdown')=='topdown':objects=sorted(objects,key=lambda o:float(o.get('y',0)))
                for obj in objects:self.object(dest,obj,(dx,dy))
            if opacity!=1:
                dest.putalpha(dest.getchannel('A').point(lambda a:round(a*opacity)));canvas.alpha_composite(dest)
        return canvas

def bake_theme(source: Path, output: Path):
    root=ET.parse(source).getroot();renderer=Renderer(root,source);canvas=renderer.render()
    tw,th=renderer.tw,renderer.th;cols=2048//(tw+2);rows=2048//(th+2)
    if not cols or not rows:raise ValueError('图块尺寸超过烘焙图集限制')
    capacity=cols*rows;unique=[];lookup={};data=[]
    for y in range(renderer.height):
        for x in range(renderer.width):
            tile=canvas.crop((x*tw,y*th,(x+1)*tw,(y+1)*th));key=hashlib.sha256(tile.tobytes()).digest()
            if key not in lookup:lookup[key]=len(unique)+1;unique.append(tile)
            data.append(lookup[key])
    result=copy.deepcopy(root)
    for child in list(result):
        if child.tag in {'tileset','layer','objectgroup','imagelayer','group','editorsettings'}:result.remove(child)
    image_dir=output.parent.parent/'Map_img'/'baked';image_dir.mkdir(parents=True,exist_ok=True)
    for start in range(0,len(unique),capacity):
        tiles=unique[start:start+capacity];pagecols=min(cols,len(tiles));pagerows=math.ceil(len(tiles)/pagecols)
        atlas=Image.new('RGBA',(pagecols*(tw+2),pagerows*(th+2)))
        for i,tile in enumerate(tiles):
            x=(i%pagecols)*(tw+2);y=(i//pagecols)*(th+2)
            atlas.paste(tile,(x+1,y+1))
            atlas.paste(tile.crop((0,0,1,th)),(x,y+1));atlas.paste(tile.crop((tw-1,0,tw,th)),(x+tw+1,y+1))
            atlas.paste(tile.crop((0,0,tw,1)),(x+1,y));atlas.paste(tile.crop((0,th-1,tw,th)),(x+1,y+th+1))
            for px,py,tx,ty in [(0,0,0,0),(tw+1,0,tw-1,0),(0,th+1,0,th-1),(tw+1,th+1,tw-1,th-1)]:atlas.putpixel((x+px,y+py),tile.getpixel((tx,ty)))
        digest=hashlib.sha256(atlas.tobytes()).hexdigest()[:16];name=f'{source.stem}-{start//capacity}-{digest}.png';atlas.save(image_dir/name)
        ts=ET.SubElement(result,'tileset',firstgid=str(start+1),name=f'baked-{start//capacity}',tilewidth=str(tw),tileheight=str(th),spacing='2',margin='1',tilecount=str(len(tiles)),columns=str(pagecols))
        ET.SubElement(ts,'image',source='../Map_img/baked/'+name,width=str(atlas.width),height=str(atlas.height))
    layer=ET.SubElement(result,'layer',id='1',name='Ground',width=str(renderer.width),height=str(renderer.height));ET.SubElement(layer,'data',encoding='csv').text='\n'+',\n'.join(','.join(map(str,data[y*renderer.width:(y+1)*renderer.width])) for y in range(renderer.height))+'\n'
    result.set('nextlayerid','2');result.set('nextobjectid','1');output.parent.mkdir(parents=True,exist_ok=True);ET.indent(result);ET.ElementTree(result).write(output,encoding='utf-8',xml_declaration=True)
    return result

if __name__=='__main__':
    import argparse
    p=argparse.ArgumentParser();p.add_argument('source',type=Path);p.add_argument('output',type=Path);p.add_argument('--bake',action='store_true');args=p.parse_args()
    if args.bake:bake_theme(args.source,args.output)
    else:
        args.output.parent.mkdir(parents=True,exist_ok=True);Renderer(ET.parse(args.source).getroot(),args.source).render().save(args.output)
