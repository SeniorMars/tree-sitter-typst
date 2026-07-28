#!/usr/bin/env node
import assert from "node:assert";
import {
  mkdtempSync,
  readFileSync,
  rmSync,
} from "node:fs";
import {tmpdir} from "node:os";
import {join, resolve} from "node:path";
import {spawnSync} from "node:child_process";
import {fileURLToPath} from "node:url";

const root = fileURLToPath(new URL("..", import.meta.url));
const output = mkdtempSync(join(tmpdir(), "tree-sitter-typst-generate-"));
const treeSitterCli = resolve(
  root,
  "node_modules",
  "tree-sitter-cli",
  "cli.js",
);

try {
  const result = spawnSync(
    process.execPath,
    [
      treeSitterCli,
      "generate",
      "--output",
      output,
      resolve(root, "grammar.js"),
    ],
    {
      cwd: root,
      encoding: "utf8",
      env: {...process.env, TYPST_ROOT_MODE: "markup"},
    },
  );
  assert.equal(
    result.status,
    0,
    `tree-sitter generate failed:\n${result.stdout}${result.stderr}`,
  );

  for (const name of ["grammar.json", "node-types.json", "parser.c"]) {
    const committed = readFileSync(resolve(root, "src", name));
    const generated = readFileSync(resolve(output, name));
    assert(
      committed.equals(generated),
      `src/${name} is stale; run npm run generate`,
    );
  }
  console.log("generated grammar.json, node-types.json, and parser.c match");
} finally {
  rmSync(output, {recursive: true, force: true});
}
