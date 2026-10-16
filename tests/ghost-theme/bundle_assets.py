#!/usr/bin/env python3
"""Bundle the theme's referenced assets so standalone editor installs can apply it."""
import argparse
import shutil
from pathlib import Path
from xml.etree import ElementTree as ET

p = argparse.ArgumentParser()
p.add_argument('--config-root', type=Path, required=True)
a = p.parse_args()
root = a.config_root.resolve()
target = Path(__file__).resolve().parents[2] / 'src/tiled/extensions/ghost-theme/assets'
files = {Path('decoration-rules-formal.json')}
for name in ('abandoned-decorations-formal.tsx', 'abandoned-map03-formal.tsx', 'map01-original.tsx'):
    path = root / 'Map_tsx' / name
    files.add(path.relative_to(root))
    for image in ET.parse(path).iter('image'):
        files.add((path.parent / image.get('source')).resolve().relative_to(root))
for relative in sorted(files):
    dest = target / relative
    dest.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(root / relative, dest)
print(f'Bundled {len(files)} files ({sum((target / p).stat().st_size for p in files):,} bytes)')
