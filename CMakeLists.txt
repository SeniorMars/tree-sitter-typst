cmake_minimum_required(VERSION 3.13)

project(tree-sitter-typst
        VERSION "0.1.0"
        DESCRIPTION "An upgraded parser for typst"
        HOMEPAGE_URL "https://github.com/seniormars/tree-sitter-typst"
        LANGUAGES C)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
option(TREE_SITTER_REUSE_ALLOCATOR "Reuse the library allocator" OFF)

set(TREE_SITTER_ABI_VERSION 15 CACHE STRING "Tree-sitter ABI version")
if(NOT ${TREE_SITTER_ABI_VERSION} MATCHES "^[0-9]+$")
    unset(TREE_SITTER_ABI_VERSION CACHE)
    message(FATAL_ERROR "TREE_SITTER_ABI_VERSION must be an integer")
endif()

include(GNUInstallDirs)

find_program(TREE_SITTER_CLI tree-sitter DOC "Tree-sitter CLI")
find_program(NODE_RUNTIME node DOC "Node.js runtime")

set(TYPST_GRAMMAR_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/grammar.js"
    "${CMAKE_CURRENT_SOURCE_DIR}/grammar/externals.js"
    "${CMAKE_CURRENT_SOURCE_DIR}/grammar/unicode.js"
    "${CMAKE_CURRENT_SOURCE_DIR}/grammar/unicode-ranges.js")

add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/src/external_tokens.h"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/grammar/externals.js"
            "${CMAKE_CURRENT_SOURCE_DIR}/scripts/generate-external-tokens.js"
    COMMAND "${NODE_RUNTIME}" scripts/generate-external-tokens.js
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    COMMENT "Generating external_tokens.h")

add_custom_command(OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/src/grammar.json"
                          "${CMAKE_CURRENT_SOURCE_DIR}/src/node-types.json"
                   DEPENDS ${TYPST_GRAMMAR_SOURCES}
                   COMMAND "${TREE_SITTER_CLI}" generate grammar.js --no-parser
                   WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
                   COMMENT "Generating grammar.json")

add_custom_command(OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/src/parser.c"
                   BYPRODUCTS "${CMAKE_CURRENT_SOURCE_DIR}/src/tree_sitter/parser.h"
                              "${CMAKE_CURRENT_SOURCE_DIR}/src/tree_sitter/alloc.h"
                              "${CMAKE_CURRENT_SOURCE_DIR}/src/tree_sitter/array.h"
                   DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/grammar.json"
                   COMMAND "${TREE_SITTER_CLI}" generate src/grammar.json
                            --abi=${TREE_SITTER_ABI_VERSION}
                   WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
                   COMMENT "Generating parser.c")

add_library(tree-sitter-typst src/parser.c)
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/src/scanner.c)
  target_sources(tree-sitter-typst PRIVATE
                 src/scanner.c
                 src/external_tokens.h
                 src/unicode_tables.h)
endif()
target_include_directories(tree-sitter-typst
                           PRIVATE src
                           INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/bindings/c>
                                     $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_compile_definitions(tree-sitter-typst PRIVATE
                           $<$<BOOL:${TREE_SITTER_REUSE_ALLOCATOR}>:TREE_SITTER_REUSE_ALLOCATOR>
                           $<$<CONFIG:Debug>:TREE_SITTER_DEBUG>)

set_target_properties(tree-sitter-typst
                      PROPERTIES
                      C_STANDARD 11
                      POSITION_INDEPENDENT_CODE ON
                      SOVERSION "${TREE_SITTER_ABI_VERSION}.${PROJECT_VERSION_MAJOR}"
                      DEFINE_SYMBOL "")

configure_file(bindings/c/tree-sitter-typst.pc.in
               "${CMAKE_CURRENT_BINARY_DIR}/tree-sitter-typst.pc" @ONLY)

install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bindings/c/tree_sitter"
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
        FILES_MATCHING PATTERN "*.h")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/tree-sitter-typst.pc"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")
install(TARGETS tree-sitter-typst
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}")

install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/queries/typst/"
        DESTINATION "${CMAKE_INSTALL_DATADIR}/tree-sitter/queries/tree-sitter-typst"
        FILES_MATCHING PATTERN "*.scm")

add_custom_target(ts-test "${TREE_SITTER_CLI}" test
                  WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
                  COMMENT "tree-sitter test")
