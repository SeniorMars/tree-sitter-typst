#!/usr/bin/env python3
from pathlib import Path
import re
root = Path(__file__).resolve().parent.parent
quoted = re.compile(r'"(?:\\.|[^"\\])*"')
for path in sorted((root / 'test/corpus').glob('*.txt')):
    text = path.read_text()
    depth = 0
    in_expected = False
    for lineno, line in enumerate(text.splitlines(), 1):
        if line.strip() == '---':
            in_expected = True
            depth = 0
            continue
        if line.startswith('==='):
            if in_expected and depth != 0:
                raise SystemExit(f'{path}:{lineno}: unbalanced expected tree')
            in_expected = False
            continue
        if in_expected:
            structural = quoted.sub('""', line)
            depth += structural.count('(') - structural.count(')')
            if depth < 0:
                raise SystemExit(f'{path}:{lineno}: unexpected closing parenthesis')
    if in_expected and depth != 0:
        raise SystemExit(f'{path}: unbalanced expected tree at EOF')
print('corpus tree balance check passed')
