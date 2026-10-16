# 秋季主题配套导出更新

编辑器扩展位于 `src/tiled/extensions/ghost-theme`，完整复制此目录（包括 assets）到编辑器的 extensions 目录，然后重启。

将本目录中的 `ghost-config/theme_bake.py` 覆盖到地图项目 ghost-config 的同名文件。它支持 TMX 背景图块的裁切区域，确保长方形地图的静态显示导出与编辑器一致，也保留原始主题切换与旧 Components / Scenes 图层兼容。

该文件是配套地图项目当前已验证版本的发布副本；更新导出逻辑时需同步此文件。依赖 Pillow，与原导出流程一致。
