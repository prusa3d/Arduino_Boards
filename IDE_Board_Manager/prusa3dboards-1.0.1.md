# Prusa Research Boards definition version 1.0.1

## Boards supported
- [Prusa MM control board](https://github.com/prusa3d/MM-control-2.0) using prusa3dboards-1.0.0.tar.bz2
  - including bootloader
- [Einsy board](https://reprap.org/wiki/EinsyRambo) using prusa3drambo-1.0.1.tar.bz2
- [miniRAMbo](https://reprap.org/wiki/MiniRambo)  using prusa3drambo-1.0.1.tar.bz2

## Specials/Limits
- Restricted to use avr-gcc version `4.9.2-atmel3.5.4-arduino2`
- Restricted to use avrdude version `6.3.0-arduino9`

Folder Structure:

    .
    ├── IDE_Boards_Manager
    │   ├── prusa3drambo-1.0.1
    │   ├── cores
    │       └── rambo
    │   ├── variants
    │       └── rambo
    │   └── ... 
    └── ...
    
Files:

    .
    ├── IDE_Boards_Manager
    │   ├── prusa3drambo-1.0.1                Please don't change that folder name when you update your Github and post a PR.
    │      ├── boards.txt                     contains definitions for the boards (board name, parameters for building and uploading sketches, etc.). 
    │      ├── platform.txt                   contains definitions for the CPU architecture used (compiler, build process parameters, tools used for upload, etc.).
    │      ├── avrdude.conf       
    │   └── ...
    │   ├── package_prusa3d_index.json
    │   ├── prusa3dboards-<versions>.tar.bz2  actual used pacakges for Ardunio IDE Boards Manager
    │   └── ...
    ├── LICENSE
    ├── README.md
    └── ...
