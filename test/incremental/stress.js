import assert from "node:assert";
import Parser from "tree-sitter";

const {default: language} = await import(
  process.env.TREE_SITTER_TYPST_BINDING || "../../bindings/node/index.js"
);

const parser = new Parser();
parser.setLanguage(language);

function assertParsesWithoutError(name, source) {
  const tree = parser.parse(source);
  assert.equal(tree.rootNode.type, "source_file");
  assert.equal(tree.rootNode.hasError, false, `${name}\n${tree.rootNode.toString()}`);
}

function nestedList(depth) {
  return Array.from(
    {length: depth},
    (_, i) => `${"  ".repeat(i)}- level ${i + 1}`,
  ).join("\n") + "\n";
}

function nestedCodeParens(depth) {
  return `#${"(".repeat(depth)}x${")".repeat(depth)}\n`;
}

function nestedMarkupBrackets(depth) {
  return `${"[".repeat(depth)}x${"]".repeat(depth)}\n`;
}

assertParsesWithoutError("deep_lists", nestedList(66));
assertParsesWithoutError("deep_code_parentheses", nestedCodeParens(220));
assertParsesWithoutError("deep_markup_brackets", nestedMarkupBrackets(220));

console.log("incremental stress tests passed");
