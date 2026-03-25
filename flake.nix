{
  description = "Arduino development environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    {
      nixpkgs,
      flake-utils,
      ...
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };

        arduino-cli = pkgs.arduino-cli;
        drawy = pkgs.drawy;
      in
      {
        devShells.default = pkgs.mkShell {
          buildInputs = [
            arduino-cli
            drawy
          ];

          shellHook = ''
            exec zsh 
          '';

          PORT = "/dev/ttyUSB0";
          UNO = "arduino:avr:uno:cpu=atmega328old";
          NANO = "arduino:avr:nano";
        };
      }
    );
}
