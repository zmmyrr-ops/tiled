# 秋季主题装饰工具

与 ghost-config 的正式秋季素材、`formal-assets.json`、`decoration-rules-formal.json` 和 `theme_bake.py` 配套。复制本目录到 Tiled 的 extensions 目录；现有构建配置也会打包本目录。

入口：**猛鬼工具集 → 地图主题切换…**。非模态面板可保持打开。

- 两个独立主题页签：“原始主题”只提供恢复原始地图操作；“秋季地图”提供秋季主题、环境生成和手动摆放。查看页签不修改地图，点击应用才切换地图主题。
- 应用原始主题恢复 map01 原图集，清理秋季自动装饰（包括锁定项），隐藏秋季背景与手动摆放物；此操作可整体撤销。再次应用秋季主题后可一键重新生成环境，手动摆放物恢复显示。两种主题都保留 Floor、Road、Collision、床、门及建造区。
- 秋季页默认收起单项调整；展开后可分别生成草垛、小草、随机点缀和落叶堆。
- 一键生成环境装饰：一次生成草垛、墙根小草、综合随机点缀和室内落叶堆；设备不参与。
- 草垛：将连续外墙合并后排布，只生成上、左、右三侧；末端缩进，不越过墙段；右侧使用原生右侧 PNG。
- 叶堆：按 Floor 和墙体识别上侧墙根、左上和右上角，分别使用正式叶堆 PNG 及像素锚点。房间下边和下角不生成叶堆。
- 小草：沿墙根生成每排 3–5 丛、间距 32 像素的短排。避让门口和设备，丢弃被截成 1–2 丛的残段。
- 随机点缀：碎叶、纸张、树桩、石碑、蘑菇和骨堆统一综合随机生成，随机种子由内部管理，面板只提供密度调整，支持选区。自然大件直立，互相留出间距并避让玩法区域。
- 设备放置：直接选择蓝框参考图中的 7 套设备之一，带设备缩略图，不再提供类别选项。选择设备与缩放，点击“放置一个”，移到地图查看实际大小预览，左键放置一个，成功后自动切回选择工具。H 镜像，Shift 暂停 10 像素吸附，右键或 Esc 结束。之后用选择对象工具拖动、旋转、复制。

手动设备可自由放置，不检查门口、床、建造区、已有设备重叠或地图边界，点击位置不会因避让规则而被拒绝。设备光效使用原 PNG，是纯视觉对象，不改变 Road/Collision。图层锁定仍按编辑器规则生效。

秋季主题内重新生成支持撤销/重做，保留锁定项与人工对象；应用原始主题会清理所有秋季自动装饰。手动设备默认设置 `ghost.locked=true`（防自动重置，不禁止编辑器拖动）。重置有“未锁定自动装饰”和“全部主题装饰”两种模式。旧版正式素材库会自动升级且保留对象变换；重新点击各生成按钮更新未锁定的旧装饰。

资源会从地图目录及其上级、已引用图集目录和当前项目目录查找，不再限定地图必须放在 Map_model 下。SVN 项目使用 `Map_img/themes/abandoned-formal` 内的拼音图片（如 `zhongjianluoye.png`、`map03overlay.png`）；图块编号、中文标签和默认生成规则读取扩展内置定义，无需在项目内另建主题 TSX 或规则文件。此模式不复制素材、不创建 `ghost-theme-assets-v1`；缺图会提示具体路径，请更新 SVN 素材。重新应用秋季主题会将已有旧主题图集及背景切换到项目图片，保存后使用相对路径，交付时携带项目的 `Map_img`。只有未使用上述项目结构的独立地图仍保留旧版便携素材包机制。

当前支持 100×100 格、有限正交地图和顶层主题图层。背景使用 9 张 1600×1600 散图按 3×3 自动拼满地图，超出部分按整张 4800 画布居中裁切，正方形、横版与竖版地图均可应用。裁切只属于当前地图，不改变共享散图；编辑器显示、保存重开和静态显示导出使用相同裁切范围。

## 验证

```sh
python3 tests/ghost-theme/run.py --tiled /path/to/Tiled.app/Contents/MacOS/Tiled --config-root /path/to/ghost-config --output /tmp/theme-test.tmx
# 使用未在日常编辑中运行的测试版 app；短暂安装测试扩展并自动清理
python3 tests/ghost-theme/run_ui.py --tiled /path/to/test/Tiled.app/Contents/MacOS/Tiled --config-root /path/to/ghost-config --map /tmp/theme-test.tmx
```

仅包含 Cocoa 插件的发布包可给第二项加 `--platform cocoa`；测试将短暂打开独立窗口并自动退出。

第一项验证素材升级、墙段端点、上下侧规则、短排草、种子、锁定、避让、保存重开与重置；第二项使用真实编辑器实例验证预览、单次放置及自动结束、镜像、门口/重叠/地图外放置、撤销/重做和退出工具。

新设备写入 Props，支持预览、撤销、重置和静态导出；旧地图已有的 Components / Scenes 对象继续兼容。自然随机点缀不出现在设备选择列表。参考图左上蓝框机器缺对应独立素材，暂未收录。


### 秋季背景（2026-10-21）

应用秋季地图时把 9 张背景散图拼成底图。再次应用会升级旧地图的背景引用，补齐被清空的背景层，并移除已有的 GhostTheme_Corners 层。秋季墙地图集保留房间地板与墙体，将旧走廊填充和外框设为透明以显示背景；原始主题仍使用原始图集。

### 资源打包与回归

完整复制 ghost-theme 目录（包括 assets），不要只复制 ghost-theme.js。Qbs 构建会递归安装这些文件，Windows 无需另行安装素材包。更新正式素材后执行：

```sh
python3 tests/ghost-theme/bundle_assets.py --config-root /path/to/ghost-config
python3 tests/ghost-theme/run_portable.py --tiled /path/to/test/Tiled.app/Contents/MacOS/Tiled --config-root /path/to/ghost-config
```

资源回归覆盖嵌套目录、中文路径、缺失素材、损坏 TSX、缺失图片、损坏 JSON，以及移动地图与自动补齐素材后重开。主回归同时验证横版、竖版与 40×53 地图的背景像素和显示导出；UI 回归验证裁切撤销/重做。显示导出需配套更新 ghost-config/theme_bake.py，以读取 TMX 中的图片裁切区域。本仓库 dist/ghost-theme/ghost-config/theme_bake.py 提供可直接覆盖的已验证发布副本。

### 项目拼音素材回归

```sh
python3 tests/ghost-theme/run_project_assets.py --tiled /path/to/Tiled.app/Contents/MacOS/Tiled --config-root /path/to/ghost-map-config
```

验证仅有拼音图片且没有主题 TSX/规则文件的项目：新地图生成、旧图集和背景引用迁移、恢复原始主题、保存重开、相对路径，以及缺图时报错且不创建旧素材目录。`run_portable.py` 也验证真实编辑器打开嵌套地图时自动发现项目图片目录。
