# Prusa Research Boards definition version 1.0.2

## Boards supported
- [Prusa MM control board](https://github.com/prusa3d/MM-control-2.0) using prusa3dboards-1.0.2.tar.bz2
  - including bootloader
- Einsy/miniRAMBo boards using prusa3dboards-1.0.2.tar.bz2
  - including bootloader
  - [Einsys](https://reprap.org/wiki/EinsyRambo)
  - [miniRAMbo](https://reprap.org/wiki/MiniRambo)
## Specials/Limits
- Restricted cores version for the Einsy/miniRAMBo boards

Folder Structure:

    .
    └── prusa3dboards
        ├── bootloaders
        │   ├── prusa_einsy_rambo
        │   └── prusa_mm_control
        ├── cores
        │   └── prusa_einsy_rambo
        ├── patches
        ├── tools
        └── variants
            ├── prusa_einsy_rambo
            └── prusa_mm_control

File Structure:

    .
    ├── Prepare-new-version.sh
    ├── package_prusa3d_index.json
    ├── prusa3dboards
    │   ├── avrdude.conf
    │   ├── avrdude.md
    │   ├── boards.txt
    │   ├── bootloaders
    │   │   ├── prusa_einsy_rambo
    │   │   │   ├── License.txt
    │   │   │   ├── Makefile
    │   │   │   ├── avr_cpunames.h
    │   │   │   ├── avrinterruptnames.h
    │   │   │   ├── command.h
    │   │   │   ├── lcd.c
    │   │   │   ├── lcd.h
    │   │   │   ├── settings.h
    │   │   │   ├── stk500boot.c
    │   │   │   ├── stk500boot.h
    │   │   │   ├── stk500boot.hex
    │   │   │   └── stk500boot_v2_mega2560.hex
    │   │   └── prusa_mm_control
    │   │       ├── Caterina-prusa_mm_control.hex
    │   │       ├── Readme.txt
    │   │       ├── build.txt
    │   │       └── program.txt
    │   ├── cores
    │   │   └── prusa_einsy_rambo
    │   │       ├── Arduino.h
    │   │       ├── CDC.cpp
    │   │       ├── Client.h
    │   │       ├── HardwareSerial.cpp
    │   │       ├── HardwareSerial.h
    │   │       ├── HardwareSerial0.cpp
    │   │       ├── HardwareSerial1.cpp
    │   │       ├── HardwareSerial2.cpp
    │   │       ├── HardwareSerial3.cpp
    │   │       ├── HardwareSerial_private.h
    │   │       ├── IPAddress.cpp
    │   │       ├── IPAddress.h
    │   │       ├── PluggableUSB.cpp
    │   │       ├── PluggableUSB.h
    │   │       ├── Print.cpp
    │   │       ├── Print.h
    │   │       ├── Printable.h
    │   │       ├── Server.h
    │   │       ├── Stream.cpp
    │   │       ├── Stream.h
    │   │       ├── Tone.cpp
    │   │       ├── USBAPI.h
    │   │       ├── USBCore.cpp
    │   │       ├── USBCore.h
    │   │       ├── USBDesc.h
    │   │       ├── Udp.h
    │   │       ├── WCharacter.h
    │   │       ├── WInterrupts.c
    │   │       ├── WMath.cpp
    │   │       ├── WString.cpp
    │   │       ├── WString.h
    │   │       ├── abi.cpp
    │   │       ├── binary.h
    │   │       ├── hooks.c
    │   │       ├── main.cpp
    │   │       ├── new.cpp
    │   │       ├── new.h
    │   │       ├── wiring.c
    │   │       ├── wiring_analog.c
    │   │       ├── wiring_digital.c
    │   │       ├── wiring_private.h
    │   │       ├── wiring_pulse.S
    │   │       ├── wiring_pulse.c
    │   │       └── wiring_shift.c
    │   ├── patches
    │   ├── platform.txt
    │   ├── tools
    │   └── variants
    │       ├── prusa_einsy_rambo
    │       │   └── pins_arduino.h
    │       └── prusa_mm_control
    │           └── pins_arduino.h
    ├── prusa3dboards-1.0.0.md
    ├── prusa3dboards-1.0.0.tar.bz2
    ├── prusa3dboards-1.0.1.md
    ├── prusa3dboards-1.0.1.tar.bz2
    ├── prusa3dboards-1.0.2.tar.bz2
    ├── prusa3dboards.version
    ├── prusa3drambo-1.0.0.tar.bz2
    └── prusa3drambo-1.0.1.tar.bz2