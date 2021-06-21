# Prusa Research Boards definition version 1.0.4

## Boards supported
- [Prusa MM control board](https://github.com/prusa3d/MM-control-2.0) using prusa3dboards-1.0.2.tar.bz2
  - including bootloader
- Einsy/miniRAMBo boards using prusa3dboards-1.0.4.tar.bz2
  - including bootloader
  - [Einsys](https://reprap.org/wiki/EinsyRambo)
  - [miniRAMbo](https://reprap.org/wiki/MiniRambo)
## Specials/Limits
- Restricted cores version for the Einsy/miniRAMBo boards

## Changes to previous version
- [Rework compiler flags](https://github.com/prusa3d/Arduino_Boards/pull/10)
- [Save a bit more ram by not compiling millis at all](https://github.com/prusa3d/Arduino_Boards/pull/12)
- [Add linker script](https://github.com/prusa3d/Arduino_Boards/pull/11)
- [Make builds more reproducible through -frandom-seed](https://github.com/prusa3d/Arduino_Boards/pull/8)

Folder Structure:
```
.
└── IDE_Board_Manager
    └── prusa3dboards
        ├── bootloaders
        │   ├── prusa_einsy_rambo
        │   └── prusa_mm_control
        ├── cores
        │   └── prusa_einsy_rambo
        ├── ldscripts
        └── variants
            ├── prusa_einsy_rambo
            └── prusa_mm_control
```
File Structure:
```
.
├── IDE_Board_Manager
│   ├── package_prusa3d_index.json
│   ├── Prepare-new-version.sh
│   ├── prusa3dboards
│   │   ├── avrdude.conf
│   │   ├── avrdude.md
│   │   ├── boards.txt
│   │   ├── bootloaders
│   │   │   ├── prusa_einsy_rambo
│   │   │   │   ├── avr_cpunames.h
│   │   │   │   ├── avrinterruptnames.h
│   │   │   │   ├── command.h
│   │   │   │   ├── lcd.c
│   │   │   │   ├── lcd.h
│   │   │   │   ├── License.txt
│   │   │   │   ├── Makefile
│   │   │   │   ├── settings.h
│   │   │   │   ├── stk500boot.c
│   │   │   │   ├── stk500boot.h
│   │   │   │   ├── stk500boot.hex
│   │   │   │   └── stk500boot_v2_mega2560.hex
│   │   │   └── prusa_mm_control
│   │   │       ├── build.txt
│   │   │       ├── Caterina-prusa_mm_control.hex
│   │   │       ├── program.txt
│   │   │       └── Readme.txt
│   │   ├── cores
│   │   │   └── prusa_einsy_rambo
│   │   │       ├── abi.cpp
│   │   │       ├── Arduino.h
│   │   │       ├── binary.h
│   │   │       ├── CDC.cpp
│   │   │       ├── Client.h
│   │   │       ├── HardwareSerial0.cpp
│   │   │       ├── HardwareSerial1.cpp
│   │   │       ├── HardwareSerial2.cpp
│   │   │       ├── HardwareSerial3.cpp
│   │   │       ├── HardwareSerial.cpp
│   │   │       ├── HardwareSerial.h
│   │   │       ├── HardwareSerial_private.h
│   │   │       ├── hooks.c
│   │   │       ├── IPAddress.cpp
│   │   │       ├── IPAddress.h
│   │   │       ├── main.cpp
│   │   │       ├── new.cpp
│   │   │       ├── new.h
│   │   │       ├── PluggableUSB.cpp
│   │   │       ├── PluggableUSB.h
│   │   │       ├── Printable.h
│   │   │       ├── Print.cpp
│   │   │       ├── Print.h
│   │   │       ├── Server.h
│   │   │       ├── Stream.cpp
│   │   │       ├── Stream.h
│   │   │       ├── Tone.cpp
│   │   │       ├── Udp.h
│   │   │       ├── USBAPI.h
│   │   │       ├── USBCore.cpp
│   │   │       ├── USBCore.h
│   │   │       ├── USBDesc.h
│   │   │       ├── WCharacter.h
│   │   │       ├── WInterrupts.c
│   │   │       ├── wiring_analog.c
│   │   │       ├── wiring.c
│   │   │       ├── wiring_digital.c
│   │   │       ├── wiring_private.h
│   │   │       ├── wiring_pulse.c
│   │   │       ├── wiring_pulse.S
│   │   │       ├── wiring_shift.c
│   │   │       ├── WMath.cpp
│   │   │       ├── WString.cpp
│   │   │       └── WString.h
│   │   ├── ldscripts
│   │   │   └── avr6.xn
│   │   ├── platform.txt
│   │   └── variants
│   │       ├── prusa_einsy_rambo
│   │       │   └── pins_arduino.h
│   │       └── prusa_mm_control
│   │           └── pins_arduino.h
│   ├── prusa3dboards-1.0.0.md
│   ├── prusa3dboards-1.0.0.tar.bz2
│   ├── prusa3dboards-1.0.1.md
│   ├── prusa3dboards-1.0.1.tar.bz2
│   ├── prusa3dboards-1.0.2.md
│   ├── prusa3dboards-1.0.2.tar.bz2
│   ├── prusa3dboards-1.0.3.md
│   ├── prusa3dboards-1.0.3.tar.bz2
│   ├── prusa3dboards-1.0.4.md
│   ├── prusa3dboards-1.0.4.tar.bz2
│   ├── prusa3dboards.version
│   ├── prusa3drambo-1.0.0.tar.bz2
│   └── prusa3drambo-1.0.1.tar.bz2
├── LICENSE
└── README.md
```
