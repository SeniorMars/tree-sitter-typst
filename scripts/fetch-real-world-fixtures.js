#!/usr/bin/env node
import assert from "node:assert";
import { mkdirSync, readFileSync, writeFileSync } from "node:fs";
import { dirname, join, normalize, relative, resolve } from "node:path";

const root = resolve(new URL("..", import.meta.url).pathname);
const options = {
  manifest: resolve(root, "test/fixtures/real_world_manifest.json"),
  outDir: resolve(root, "test/fixtures/real_world"),
};

for (let i = 2; i < process.argv.length; i += 1) {
  const arg = process.argv[i];
  if (arg === "--manifest") {
    options.manifest = resolve(process.argv[++i]);
  } else if (arg === "--out") {
    options.outDir = resolve(process.argv[++i]);
  } else {
    throw new Error(`unknown argument: ${arg}`);
  }
}

function destinationFor(repository, path) {
  const destination = normalize(join(options.outDir, repository, path));
  const rel = relative(options.outDir, destination);
  assert(!rel.startsWith("..") && !rel.startsWith("/"), `unsafe output path: ${destination}`);
  return destination;
}

function rawUrl(repository, ref, path) {
  return `https://raw.githubusercontent.com/${repository}/${ref}/${path}`;
}

async function fetchText(url) {
  const response = await fetch(url, {
    headers: {
      "accept": "text/plain, */*",
      "user-agent": "tree-sitter-typst-real-world-fixture-fetcher",
    },
  });
  if (!response.ok) {
    throw new Error(`${url}: ${response.status} ${response.statusText}`);
  }
  return await response.text();
}

function writeSources(manifest, fetched) {
  const lines = [
    "# Real-world Typst fixture sources",
    "",
    "Downloaded by `scripts/fetch-real-world-fixtures.js` from pinned public repository revisions.",
    "The downloaded `.typ` files are ignored by git; this file records provenance for the local checkout.",
    "",
  ];
  for (const source of manifest.sources) {
    lines.push(`## ${source.name}`);
    lines.push("");
    lines.push(`- Repository: https://github.com/${source.repository}`);
    lines.push(`- Ref: \`${source.ref}\``);
    lines.push(`- License: ${source.license} (${source.license_url})`);
    lines.push("");
    for (const item of fetched.filter((entry) => entry.source === source.name)) {
      lines.push(`- \`${item.path}\` -> \`${relative(options.outDir, item.destination)}\``);
    }
    lines.push("");
  }
  writeFileSync(join(options.outDir, "SOURCES.md"), lines.join("\n"), "utf8");
}

const manifest = JSON.parse(readFileSync(options.manifest, "utf8"));
const fetched = [];
mkdirSync(options.outDir, { recursive: true });

for (const source of manifest.sources) {
  for (const path of source.paths) {
    const url = rawUrl(source.repository, source.ref, path);
    const destination = destinationFor(source.repository, path);
    const text = await fetchText(url);
    mkdirSync(dirname(destination), { recursive: true });
    writeFileSync(destination, text, "utf8");
    fetched.push({ source: source.name, path, destination });
    console.log(`fetched ${source.repository}/${path}`);
  }
}

writeSources(manifest, fetched);
console.log(`wrote ${fetched.length} real-world Typst fixtures to ${options.outDir}`);
