use criterion::{
    black_box, criterion_group, criterion_main, BatchSize, BenchmarkId, Criterion, Throughput,
};
use std::time::Duration;
use tree_sitter::{InputEdit, Parser, Point, StreamingIterator};

const SYNTHETIC_DASHBOARD: &str = include_str!("../test/fixtures/synthetic/complex-dashboard.typ");
const REAL_WORLD_ACCESSIBILITY_DOC: &str =
    include_str!("../test/fixtures/real_world/typst/typst/docs/content/guides/accessibility.typ");
const REAL_WORLD_CODE_HEAVY_DRAWER: &str =
    include_str!("../test/fixtures/real_world/Typsium/alchemist/src/drawer.typ");
const REAL_WORLD_MATH_EQUATION: &str =
    include_str!("../test/fixtures/real_world/typst/typst/tests/suite/math/equation.typ");
const REAL_WORLD_MATH_CANCEL: &str =
    include_str!("../test/fixtures/real_world/typst/typst/tests/suite/math/cancel.typ");

struct Fixture {
    name: &'static str,
    source: &'static str,
}

const FULL_PARSE_FIXTURES: &[Fixture] = &[
    Fixture {
        name: "synthetic_dashboard",
        source: SYNTHETIC_DASHBOARD,
    },
    Fixture {
        name: "real_world_accessibility_doc",
        source: REAL_WORLD_ACCESSIBILITY_DOC,
    },
    Fixture {
        name: "real_world_code_heavy_drawer",
        source: REAL_WORLD_CODE_HEAVY_DRAWER,
    },
    Fixture {
        name: "real_world_math_equation",
        source: REAL_WORLD_MATH_EQUATION,
    },
    Fixture {
        name: "real_world_math_cancel",
        source: REAL_WORLD_MATH_CANCEL,
    },
];

fn parser() -> Parser {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_typst::LANGUAGE.into())
        .expect("failed to load tree-sitter-typst language");
    parser
}

fn point_for_byte(source: &str, byte: usize) -> Point {
    let mut row = 0;
    let mut column = 0;

    for byte_value in source[..byte].bytes() {
        if byte_value == b'\n' {
            row += 1;
            column = 0;
        } else {
            column += 1;
        }
    }

    Point { row, column }
}

fn replace_once(source: &str, old: &str, new: &str) -> (String, InputEdit) {
    let start_byte = source
        .find(old)
        .unwrap_or_else(|| panic!("benchmark edit target not found: {old}"));
    let old_end_byte = start_byte + old.len();
    let new_end_byte = start_byte + new.len();

    let mut edited = String::with_capacity(source.len() - old.len() + new.len());
    edited.push_str(&source[..start_byte]);
    edited.push_str(new);
    edited.push_str(&source[old_end_byte..]);

    let edit = InputEdit {
        start_byte,
        old_end_byte,
        new_end_byte,
        start_position: point_for_byte(source, start_byte),
        old_end_position: point_for_byte(source, old_end_byte),
        new_end_position: point_for_byte(&edited, new_end_byte),
    };

    (edited, edit)
}

fn assert_clean_parse(parser: &mut Parser, name: &str, source: &str) {
    let tree = parser
        .parse(source, None)
        .unwrap_or_else(|| panic!("parser returned no tree for {name}"));
    assert!(
        !tree.root_node().has_error(),
        "benchmark fixture contains parse errors: {name}",
    );
}

fn bench_full_parse(c: &mut Criterion) {
    let mut group = c.benchmark_group("full_parse");

    for fixture in FULL_PARSE_FIXTURES {
        group.throughput(Throughput::Bytes(fixture.source.len() as u64));
        group.bench_with_input(
            BenchmarkId::new("parse", fixture.name),
            fixture.source,
            |b, source| {
                let mut parser = parser();
                assert_clean_parse(&mut parser, fixture.name, source);

                b.iter(|| {
                    let tree = parser
                        .parse(black_box(source.as_bytes()), None)
                        .expect("parser returned no tree");
                    black_box(tree);
                });
            },
        );
    }

    group.throughput(Throughput::Bytes(
        FULL_PARSE_FIXTURES
            .iter()
            .map(|fixture| fixture.source.len() as u64)
            .sum(),
    ));
    group.bench_function("parse_selected_real_world_batch", |b| {
        b.iter(|| {
            let mut parser = parser();
            for fixture in FULL_PARSE_FIXTURES {
                let tree = parser
                    .parse(black_box(fixture.source), None)
                    .expect("parser returned no tree");
                black_box(tree);
            }
        });
    });

    group.finish();
}

fn bench_incremental_edits(c: &mut Criterion) {
    let mut group = c.benchmark_group("incremental_parse");
    group.throughput(Throughput::Bytes(SYNTHETIC_DASHBOARD.len() as u64));

    let edit_cases = [
        (
            "heading_text",
            "Accessibility Notes",
            "Accessibility Notes Updated",
        ),
        (
            "heading_level",
            "== Accessibility Notes",
            "=== Accessibility Notes",
        ),
        ("math_attachment", "alpha_i^2", "alpha_i^2_j"),
        (
            "embedded_call_argument",
            "#dashboard(samples, scale: 2pt, debug: true)",
            "#dashboard(samples, scale: 3pt, debug: true)",
        ),
        (
            "content_call_kind",
            "#make-callout(\"warning\"",
            "#make-callout(\"success\"",
        ),
    ];

    for (name, old, new) in edit_cases {
        group.bench_function(name, |b| {
            let mut parser = parser();
            let clean_tree = parser
                .parse(SYNTHETIC_DASHBOARD, None)
                .expect("parser returned no initial tree");
            assert!(!clean_tree.root_node().has_error());

            let (edited_source, edit) = replace_once(SYNTHETIC_DASHBOARD, old, new);
            assert_clean_parse(&mut parser, name, edited_source.as_str());

            b.iter_batched(
                || clean_tree.clone(),
                |mut tree| {
                    tree.edit(&edit);
                    let reparsed = parser
                        .parse(black_box(edited_source.as_str()), Some(&tree))
                        .expect("parser returned no incremental tree");
                    black_box(reparsed);
                },
                BatchSize::SmallInput,
            );
        });
    }

    group.finish();
}

fn bench_query_execution(c: &mut Criterion) {
    let mut parser = parser();
    let tree = parser
        .parse(SYNTHETIC_DASHBOARD, None)
        .expect("parser returned no tree");
    assert!(!tree.root_node().has_error());

    let language = tree_sitter_typst::LANGUAGE.into();
    let query_cases = [
        ("highlights", tree_sitter_typst::HIGHLIGHTS_QUERY),
        ("injections", tree_sitter_typst::INJECTIONS_QUERY),
        ("locals", tree_sitter_typst::LOCALS_QUERY),
        ("folds", tree_sitter_typst::FOLDS_QUERY),
        ("tags", tree_sitter_typst::TAGS_QUERY),
    ];

    let mut group = c.benchmark_group("queries");
    group.throughput(Throughput::Bytes(SYNTHETIC_DASHBOARD.len() as u64));

    for (name, source) in query_cases {
        let query = tree_sitter::Query::new(&language, source)
            .unwrap_or_else(|error| panic!("failed to compile {name} query: {error}"));

        group.bench_function(name, |b| {
            b.iter_batched(
                tree_sitter::QueryCursor::new,
                |mut cursor| {
                    let captures = cursor.captures(
                        &query,
                        tree.root_node(),
                        black_box(SYNTHETIC_DASHBOARD.as_bytes()),
                    );
                    let count = captures.count();
                    black_box(count);
                },
                BatchSize::SmallInput,
            );
        });
    }

    group.finish();
}

criterion_group! {
    name = benches;
    config = Criterion::default()
        .warm_up_time(Duration::from_millis(500))
        .measurement_time(Duration::from_secs(2))
        .sample_size(30);
    targets =
        bench_full_parse,
        bench_incremental_edits,
        bench_query_execution,
}
criterion_main!(benches);
