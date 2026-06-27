{
  description = "Tree-sitter grammar for Typst";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  };

  outputs =
    { self, nixpkgs }:
    let
      systems = [
        "x86_64-linux"
        "aarch64-linux"
        "x86_64-darwin"
        "aarch64-darwin"
      ];

      forAllSystems = nixpkgs.lib.genAttrs systems;
    in
    {
      packages = forAllSystems (
        system:
        let
          pkgs = import nixpkgs { inherit system; };
        in
        rec {
          tree-sitter-typst = pkgs.callPackage ./nix/package.nix { };
          default = tree-sitter-typst;
        }
      );

      defaultPackage = forAllSystems (system: self.packages.${system}.default);

      devShells = forAllSystems (
        system:
        let
          pkgs = import nixpkgs { inherit system; };
          python = pkgs.python3.withPackages (ps: [ ps.regex ]);
        in
        {
          default = pkgs.mkShell {
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
          };
        }
      );

      devShell = forAllSystems (system: self.devShells.${system}.default);
    };
}
