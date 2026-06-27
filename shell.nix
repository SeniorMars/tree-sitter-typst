{ pkgs ? import <nixpkgs> { } }:

let
  python = pkgs.python3.withPackages (ps: [ ps.regex ]);
in
pkgs.mkShell {
  packages = with pkgs; [
    cargo
    cmake
    gnumake
    nodejs
    pkg-config
    python
    rustc
    tree-sitter
  ];
}
