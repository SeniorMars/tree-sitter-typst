import { createRequire } from 'node:module';
import { resolve } from 'node:path';

const require = createRequire(import.meta.url);

class RustRegex { constructor(source, flags = '') { this.source = source; this.flags = flags; } }
function n(type, ...children) { return {type, children}; }
function seq(...x) { return n('seq', ...x); }
function choice(...x) { return n('choice', ...x); }
function repeat(x) { return n('repeat', x); }
function repeat1(x) { return n('repeat1', x); }
function optional(x) { return n('optional', x); }
function field(name, x) { return n('field', name, x); }
function alias(x, name) { return n('alias', x, name); }
function token(x) { return n('token', x); }
token.immediate = x => n('token.immediate', x);
function prec(value, x) { return n('prec', value, x); }
prec.left = (value, x) => x === undefined ? n('prec.left', value) : n('prec.left', value, x);
prec.right = (value, x) => x === undefined ? n('prec.right', value) : n('prec.right', value, x);
prec.dynamic = (value, x) => n('prec.dynamic', value, x);
let specification;
function grammar(value) { specification = value; return value; }
Object.assign(globalThis, {RustRegex, seq, choice, repeat, repeat1, optional, field, alias, token, prec, grammar});

require(resolve(process.argv[2] || 'grammar.js'));
const references = new Set();
const symbols = new Proxy({}, {
  get(_target, property) {
    if (typeof property === 'symbol') return undefined;
    references.add(String(property));
    return {type: 'symbol', name: String(property)};
  },
});

const defined = new Set(Object.keys(specification.rules));
const ruleTrees = new Map();
const external = new Set(specification.externals(symbols).map(x => x.name));
for (const callback of ['extras', 'word', 'supertypes', 'conflicts']) {
  if (typeof specification[callback] === 'function') specification[callback](symbols);
}
for (const [name, callback] of Object.entries(specification.rules)) {
  try {
    ruleTrees.set(name, callback(symbols));
  } catch (error) {
    console.error(`failed to evaluate rule ${name}:\n${error.stack}`);
    process.exitCode = 1;
  }
}
for (const reference of references) {
  if (!defined.has(reference) && !external.has(reference)) {
    // Alias targets such as `raw_delimiter` do not need a producing rule.
    if (!['raw_delimiter', 'math_delimiter'].includes(reference)) {
      console.error(`undefined symbol: ${reference}`);
      process.exitCode = 1;
    }
  }
}
console.log(`grammar=${specification.name} rules=${defined.size} externals=${external.size} references=${references.size}`);


function nullable(node, values) {
  if (node == null) return false;
  if (typeof node === 'string' || node instanceof RegExp || node instanceof RustRegex) {
    return false;
  }
  if (node.type === 'symbol') return values.get(node.name) || false;

  const c = node.children || [];
  switch (node.type) {
    case 'repeat':
    case 'optional':
      return true;
    case 'repeat1':
      return nullable(c[0], values);
    case 'seq':
      return c.every(child => nullable(child, values));
    case 'choice':
      return c.some(child => nullable(child, values));
    case 'field':
      return nullable(c[1], values);
    case 'alias':
      return nullable(c[0], values);
    case 'prec':
    case 'prec.left':
    case 'prec.right':
    case 'prec.dynamic':
      return nullable(c[c.length - 1], values);
    case 'token':
    case 'token.immediate':
      // Empty lexical tokens are invalid independently; treat token rules as
      // consuming for grammar nullability so this check focuses on nonterminals.
      return false;
    default:
      return false;
  }
}

const nullability = new Map([...defined].map(name => [name, false]));
let changed = true;
while (changed) {
  changed = false;
  for (const [name, tree] of ruleTrees) {
    const next = nullable(tree, nullability);
    if (next !== nullability.get(name)) {
      nullability.set(name, next);
      changed = true;
    }
  }
}

const invalidNullable = [...nullability]
  .filter(([name, value]) => value && name !== 'source_file')
  .map(([name]) => name);
if (invalidNullable.length) {
  console.error(`nullable non-start rules: ${invalidNullable.join(', ')}`);
  process.exitCode = 1;
} else {
  console.log('nullability: only source_file may be empty');
}
