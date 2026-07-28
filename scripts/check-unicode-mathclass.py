#!/usr/bin/env python3
"""Check all committed Unicode artifacts against the canonical generator."""
from __future__ import annotations

import importlib.util
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
GENERATOR = ROOT / "scripts" / "generate-unicode-tables.py"


def load_generator():
    spec = importlib.util.spec_from_file_location(
        "unicode_table_generator",
        GENERATOR,
    )
    if spec is None or spec.loader is None:
        raise SystemExit(f"could not load {GENERATOR}")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def compare(path: Path, expected: str) -> None:
    actual = path.read_text(encoding="utf-8")
    if actual != expected:
        raise SystemExit(
            f"{path.relative_to(ROOT)} is stale; run npm run generate:unicode",
        )
    print(f"{path.relative_to(ROOT)}: generated artifact matches")


def main() -> None:
    generator = load_generator()
    header, javascript = generator.generate_outputs()
    compare(ROOT / "src" / "unicode_tables.h", header)
    compare(ROOT / "grammar" / "unicode-ranges.js", javascript)
    print("unicode artifact parity passed")


if __name__ == "__main__":
    main()
