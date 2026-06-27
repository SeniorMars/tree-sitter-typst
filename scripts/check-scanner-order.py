#!/usr/bin/env python3
from pathlib import Path
import re

root = Path(__file__).resolve().parent.parent
grammar = (root / 'grammar.js').read_text()
scanner = (root / 'src/scanner.c').read_text()

block = re.search(
    r'externals:\s*\(?\s*\$\s*\)?\s*=>\s*\[(.*?)\],\s*\n\s*// Code horizontal',
    grammar,
    re.S,
)
if not block:
    raise SystemExit('cannot find externals block')
operator_ahead_names = [
    name.removeprefix('_')
    for name in re.findall(
        r'ahead:\s*"(_code_[A-Za-z0-9_]+_operator_ahead)"',
        grammar,
    )
]

grammar_names = []
for match in re.finditer(
    r'\.\.\.operatorAheadExternals\(\$\)|\$\.([A-Za-z_][A-Za-z0-9_]*)',
    block.group(1),
):
    if match.group(0).startswith('...operatorAheadExternals'):
        if not operator_ahead_names:
            raise SystemExit('cannot expand operatorAheadExternals')
        grammar_names.extend(operator_ahead_names)
    else:
        grammar_names.append(match.group(1).removeprefix('_'))

enum = re.search(r'enum TokenType\s*\{(.*?)\};', scanner, re.S)
if not enum:
    raise SystemExit('cannot find TokenType enum')
scanner_names = []
for raw in enum.group(1).split(','):
    name = re.sub(r'/\*.*?\*/|//.*', '', raw, flags=re.S).strip()
    if name:
        scanner_names.append(name.lower())

if grammar_names != scanner_names:
    print('grammar externals:', grammar_names)
    print('scanner enum:    ', scanner_names)
    raise SystemExit('external token order mismatch')

print(f'external scanner order matches {len(grammar_names)} tokens')
