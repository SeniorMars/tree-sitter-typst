import assert from "node:assert";
import Parser from "tree-sitter";

const {default: language} = await import(
  process.env.TREE_SITTER_TYPST_BINDING || "../../bindings/node/index.js"
);

const parser = new Parser();
parser.setLanguage(language);

function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split("\n");
  return {row: lines.length - 1, column: Buffer.byteLength(lines.at(-1))};
}

function applyEdit(text, tree, edit) {
  const oldText = edit.oldText ?? "";
  const newText = edit.newText ?? "";
  const oldEndIndex = edit.index + Buffer.byteLength(oldText);
  const newEndIndex = edit.index + Buffer.byteLength(newText);
  const after =
    text.slice(0, edit.index) +
    newText +
    text.slice(edit.index + oldText.length);

  const startPosition = pointAt(text, edit.index);
  const oldEndPosition = pointAt(text, edit.index + oldText.length);
  const newEndPosition = pointAt(after, edit.index + newText.length);

  tree.edit({
    startIndex: edit.index,
    oldEndIndex,
    newEndIndex,
    startPosition,
    oldEndPosition,
    newEndPosition,
  });

  return {after, tree: parser.parse(after, tree)};
}

function assertConverges(name, before, edits, options = {}) {
  let text = before;
  let tree = parser.parse(text);

  for (const edit of edits) {
    ({after: text, tree} = applyEdit(text, tree, edit));
    const clean = parser.parse(text);
    assert.strictEqual(
      tree.rootNode.toString(),
      clean.rootNode.toString(),
      `${name}\n${text}`,
    );
  }

  if (options.expectError !== undefined) {
    assert.equal(
      tree.rootNode.hasError,
      options.expectError,
      `${name}\n${tree.rootNode.toString()}`,
    );
  }
}

function replaceFirst(source, oldText, newText) {
  const index = source.indexOf(oldText);
  assert.notEqual(index, -1, oldText);
  return {index, oldText, newText};
}

function insertBeforeFirst(source, needle, newText) {
  const index = source.indexOf(needle);
  assert.notEqual(index, -1, needle);
  return {index, newText};
}

assertConverges("insert closing call delimiter", "#f(", [
  {index: 3, newText: ")"},
], {expectError: false});

assertConverges("remove closing call delimiter", "#f()", [
  {index: 3, oldText: ")"},
], {expectError: true});

assertConverges("insert closing content delimiter", "#[text", [
  {index: 6, newText: "]"},
], {expectError: false});

assertConverges("remove closing content delimiter", "#[text]", [
  {index: 6, oldText: "]"},
], {expectError: true});

assertConverges("insert newline before dot", "#object.field\n", [
  {index: 7, newText: "\n  "},
], {expectError: false});

{
  const source = "#{\n  x\n  5\n}\n";
  assertConverges("edit newline expression into leading-dot float", source, [
    insertBeforeFirst(source, "5", "."),
  ], {expectError: false});
}

{
  const source = "#{\n  value\n  .field\n}\n";
  assertConverges("edit contextual field into newline-after-dot error", source, [
    insertBeforeFirst(source, "field", "\n  "),
  ], {expectError: true});
}

{
  const source = "#{\n  f(1)\n}\n";
  assertConverges("edit immediate call into commented non-call", source, [
    insertBeforeFirst(source, "(", "/* c */"),
  ], {expectError: true});
}

{
  const source = "#{\n  f[body]\n}\n";
  assertConverges("edit immediate content arg into commented non-call", source, [
    insertBeforeFirst(source, "[", "/* c */"),
  ], {expectError: true});
}

{
  const source = "#f.field\n";
  assertConverges("edit atomic field into commented markup text", source, [
    insertBeforeFirst(source, ".", "/* c */"),
  ], {expectError: false});
}

{
  const source = "#f.field\n";
  assertConverges("edit atomic field into spaced markup text", source, [
    insertBeforeFirst(source, ".", " "),
  ], {expectError: false});
}

{
  const source = "#value._field\n";
  assertConverges("edit atomic field into bare underscore text", source, [
    replaceFirst(source, "_field", "_"),
  ], {expectError: true});
}

{
  const source = "#if condition[body]\n";
  assertConverges("edit immediate if content into comment body", source, [
    insertBeforeFirst(source, "[", "/* c */"),
  ], {expectError: false});
}

assertConverges("parenthesized expression to array", "#(x)\n", [
  {index: 3, newText: ","},
], {expectError: false});

assertConverges("parenthesized expression to dictionary", "#(x)\n", [
  {index: 2, oldText: "x", newText: "x: y"},
], {expectError: false});

assertConverges("parenthesized expression to closure", "#(x)\n", [
  {index: 4, newText: " => y"},
], {expectError: false});

assertConverges("parenthesized expression to assignment", "#(x)\n", [
  {index: 4, newText: " = y"},
]);

{
  const source = "#{ (left, right) = pair }\n";
  assertConverges("edit reassignment into named sink pattern", source, [
    replaceFirst(source, "left, right", "key: object.field, ..rest"),
  ], {expectError: false});
}

assertConverges("indent list continuation", "- one\nsecond\n", [
  {index: 6, newText: "  "},
], {expectError: false});

assertConverges("dedent list continuation", "- one\n  second\n", [
  {index: 6, oldText: "  "},
], {expectError: false});

{
  const source = "- first paragraph\n  second paragraph\n";
  assertConverges("edit list continuation into list parbreak", source, [
    insertBeforeFirst(source, "  second paragraph", "\n"),
  ], {expectError: false});
}

assertConverges("change raw delimiter lengths", "`x`", [
  {index: 0, newText: "`"},
  {index: 3, newText: "`"},
], {expectError: false});

assertConverges("change inline equation to block equation", "$x$", [
  {index: 1, newText: " "},
  {index: 3, newText: " "},
], {expectError: false});

{
  const source = "$a b$\n";
  assertConverges("edit math expression gap into comment trivia", source, [
    replaceFirst(source, " ", " /* c */ "),
  ], {expectError: false});
}

{
  const source = "$a _b$\n";
  assertConverges("edit math attachment gap into comment trivia", source, [
    replaceFirst(source, " ", " /* c */ "),
  ], {expectError: false});
}

assertConverges("complete unclosed string", '#"abc', [
  {index: 5, newText: '"'},
], {expectError: false});

assertConverges("complete unclosed block comment", "/* c", [
  {index: 4, newText: " */"},
], {expectError: false});

{
  const source = "#value\n";
  assertConverges("edit embedded hash into invalid spaced marker", source, [
    insertBeforeFirst(source, "value", " "),
  ], {expectError: true});
}

{
  const source = "#12pt\n";
  assertConverges("edit numeric unit into comment-separated text", source, [
    insertBeforeFirst(source, "pt", "/*\n*/"),
  ], {expectError: false});
}

{
  const source = "#9223372036854775807\n";
  assertConverges("edit large integer without token reclassification", source, [
    replaceFirst(source, "5807", "5808"),
  ], {expectError: false});
}

{
  const source = "#1e2\n";
  assertConverges("edit valid exponent into recoverable prefix", source, [
    replaceFirst(source, "2", "+"),
  ], {expectError: false});
}

console.log("incremental edit matrix tests passed");
