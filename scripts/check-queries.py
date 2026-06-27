#!/usr/bin/env python3
from pathlib import Path
import json
import re
import sys

root = Path(__file__).resolve().parent.parent
grammar = (root / 'grammar.js').read_text()
rules = set(re.findall(r'^\s{4}([A-Za-z_][A-Za-z0-9_]*):\s', grammar, re.M))
aliases = set(re.findall(r'alias\([^\n]*?,\s*\$\.([A-Za-z_][A-Za-z0-9_]*)\)', grammar))
aliases.update({'raw_delimiter', 'math_delimiter'})
external_block = re.search(
    r'externals:\s*\(?\s*\$\s*\)?\s*=>\s*\[(.*?)\],\s*\n\s*// Code horizontal',
    grammar,
    re.S,
)
if external_block is None:
    raise SystemExit('could not locate externals block in grammar.js')
externals = set(re.findall(
    r'\$\.([A-Za-z_][A-Za-z0-9_]*)',
    external_block.group(1),
))
known = rules | aliases | externals | {'ERROR', '_'}
node_types_path = root / 'src' / 'node-types.json'
if node_types_path.exists():
    node_types = json.loads(node_types_path.read_text())
    known.update(
        node_type['type']
        for node_type in node_types
        if node_type.get('named')
    )
failed = False
query_roots = [
    root / 'queries',
    root / 'editors' / 'helix' / 'queries',
]
for path in sorted(path for query_root in query_roots for path in query_root.rglob('*.scm')):
    text = path.read_text()
    # Strip line comments before finding S-expression heads.
    text = '\n'.join(line.split(';', 1)[0] for line in text.splitlines())
    nodes = set(re.findall(r'\(([A-Za-z_][A-Za-z0-9_]*)\b', text))
    nodes = {n for n in nodes if not n.startswith('_')}
    missing = sorted(nodes - known)
    if missing:
        failed = True
        print(f'{path.relative_to(root)}: unknown named nodes: {", ".join(missing)}', file=sys.stderr)
if failed:
    raise SystemExit(1)
print(f'query node check passed ({len(rules)} grammar rules, {len(aliases)} aliases)')
