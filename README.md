# Prusa Research AVR Boards
Prusa Research AVR Boards definitions for Arduino compatible boards manufactured/used by Prusa Research
- [Prusa MM Control board](https://github.com/prusa3d/MM-control-2.0)
- Prusa Einsy and miniRAMBo boards by Ultimachine [Einsy](https://github.com/ultimachine/Einsy-Rambo) and [miniRAMBo](https://github.com/ultimachine/Mini-Rambo)

# Table of contents

<!--ts-->
   * [Linux build](#linux)
   * Windows build
     * [Using Linux subsystem](#using-linux-subsystem-under-windows-10-64-bit)
     * [Using Git-bash](#using-git-bash-under-windows-10-64-bit)
   * [How-to change code and dependencies](#2-How-to-modify)
   * [Prepare new version](#3-Prepare-new-version)
<!--te-->


# 1-Build environment
## Linux

## Windows
Please make sure if you modify code, files, etc. that the line endings are UNIX conform (LF and not CRLF).
### Using Linux subsystem under Windows 10 64-bit
_notes: Script and instructions contributed by 3d-gussner. Use at your own risk. Script downloads Arduino executables outside of Prusa control. Report problems [there.](https://github.com/3d-gussner/Arduino_Boards/issues)._
- follow the [Microsoft guide](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
- Tested versions are at this moment
  - Ubuntu other may different
  - After the installation and reboot please open your Ubuntu bash and do following steps
  - run command `apt-get update`
  - run command `apt-get upgrade` to update your OS.

#### Some Tips for Ubuntu
- Linux is case sensetive so please don't forget to use capital letters where needed, like changing to a directory
- To change the path to your Prusa-Firmware location you downloaded and unzipped
  - Example: You files are under `C:\Users\<your-username>\Downloads\Arduino_Boards`
  - use under Ubuntu the following command `cd /mnt/c/Users/<your-username>/Downloads/Arduino_Boards`
    to change to the right folder
- Unix and windows have different line endings (LF vs CRLF), try dos2unix to convert
  - This should fix the `"$'\r': command not found"` error
  - to install run `apt-get install dos2unix`

#### Modify Arduino_Boards with Ubuntu Linux subsystem installed
- open Ubuntu bash
- change to your source code folder (case sensitive)
- Read How-to-modify below
- run `./Prepare-new-version.sh`
- Read How-to-modify part `package_prusa3d_index.json` below

### Using Git-bash under Windows 10 64-bit
_notes: Script and instructions contributed by 3d-gussner. Use at your own risk. Script downloads Arduino executables outside of Prusa control. Report problems [there.](https://github.com/3d-gussner/Prusa-Firmware/issues) Multi language build is supported._
- Download and install the [64bit Git version](https://git-scm.com/download/win)
- Also follow these [instructions](https://gist.github.com/evanwill/0207876c3243bbb6863e65ec5dc3f058)

#### Compile Prusa-firmware with Git-bash installed
- open Git-bash
- Read How-to-modify below
- change to your source code folder
- run `bash Prepare-new-version.sh`
- Read How-to-modify `package_prusa3d_index.json` below

# 2-How-to-modify
Folder Structure:

    .
    +-- IDE_Boards_Manager
    ¦   +-- prusa3dboards          Please don't change that folder name when you update your Github and post a PR.
    ¦   +-- bootloaders
    ¦       +-- prusa_einsy_rambo  Which is a clone of https://github.com/prusa3d/stk500v2-prusa 
    ¦       +-- prusa_mm_control
    ¦   +-- cores
    ¦       +-- prusa_einsy_rambo
    ¦   +-- variants
    ¦       +-- prusa_einsy_rambo
    ¦       +-- prusa_mm_control
    ¦   +-- ... 
    +-- ...
    
Files:

    .
    +-- IDE_Boards_Manager
    ¦   +-- prusa3dboards                Please don't change that folder name when you update your Github and post a PR.
    ¦      +-- boards.txt                contains definitions for the boards (board name, parameters for building and uploading sketches, etc.). 
    ¦      +-- platform.txt             contains definitions for the CPU architecture used (compiler, build process parameters, tools used for upload, etc.).
    ¦      +-- avrdude.conf       
    ¦      +-- ...
    ¦   +-- package_prusa3d_index.json
    ¦   +-- prusa3dboards.version             contains the release version numbers and is used in `Prepare-new-version.sh`. The first line is used.
    ¦   +-- prusa3dboards-<versions>.tar.bz2  actual used pacakges for Ardunio IDE Boards Manager
    ¦   +-- prusa3dboards-<versions>.md       Info about the version
    ¦   +-- ...
    +-- LICENSE
    +-- README.md
    +-- ...
    
More information about [boards.txt](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5-3rd-party-Hardware-specification#boardstxt)
More information about [platforms.txt](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5-3rd-party-Hardware-specification#platformtxt)
More information about [package_prusa3d_index.json](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.6.x-package_index.json-format-specification)

Naming convention for version:
- <`major:#1`.`minor:#2`.`maintenance:#2`"-`devel status:0-4`-`devel build:#6`" where `-devel status` and `devel build` are optional
  - `#1` = numbers 0-9
  - `#2` = numbers 0-99
  - `0-4`= only numbers between 0 and 4. 0=devel, 1=alpha, 2=beta, 3=pre-release, 4=release candidate
  - `#6` = numbers 0-999999

Few examples:

- 1.0.0-0-235 Is a version in development and devel build 235.
- 1.0.0       Is the frist stable version
- 1.0.1       Is a stable version that was maintaind...like adding a bootloader or changing tools to existing boards
- 1.1.0-3     Is a pre-release version including new boards
- 1.1.0       Is the first stable version including new boards

After modifying the source code please follow these steps:
- add the new version (following the naming conention) in the first line of `prusa3dboards.version`
- run `Prepare-new-version.sh` to generate `prusa3dboards-<version>tar.bz2` and to show `sha256checksum` and `size` needed in the `package_prusa3d_index.json`
- open `package_prusa3d_index.json`in your prefered editor (like notepad++)
  - Directly under
  
  ```
  {
  "packages": [
    {
      "name": "PrusaResearch",
      "maintainer": "Prusa Research",
      "websiteURL": "https://www.prusa3d.com/",
      "email": "info@prusa3d.com",
      "help": {
        "online": "https://github.com/3d-gussner/Arduino_Boards"
      },
      "platforms": [
  ```
  you will find the latest Prusa Research AVR Boards definition ... something like this
  ```
         {
          "name": "Prusa Research AVR Boards",
          "architecture": "avr",
          "version": "1.0.2",
          "category": "Contributed",
          "url": "https://raw.githubusercontent.com/3d-gussner/Arduino_Boards/V1.0.2/IDE_Board_Manager/prusa3dboards-1.0.2.tar.bz2",
          "archiveFileName": "prusa3dboards-1.0.2.tar.bz2",
          "checksum": "SHA-256:7d49c48d86644513bd2f2222024934e827783f9f5be160c8a1ae14e177d0393a",
          "size": "120855",
          "help": {
            "online": "https://learn.sparkfun.com/tutorials/installing-arduino-ide/board-add-ons-with-arduino-board-manager"
          },
          "boards": [
            {
              "name": "Original Prusa i3 MK3 Multi Material 2.0 upgrade"
            },
            {
              "name": "Original Prusa i3 MK3/MK3S Einsy RAMBo"
            }
          ],
          "toolsDependencies": []
        },
  ```


- Copy and paste this section twice
- Modify the top one with new values
  - change `"version": "1.0.2",` `"version": "<version shown by Prepare-new-version.sh>",
  - change in `"url":` and `"archiveFileName":` the "ArchiveFileName" parts you got from `Prepare-new-version.sh`
  - if you have your own github for of this repository and you made a new worktree/branch to test your code you should not forget to modify the `"url":` to your `branch`
  - change in `"checksum": ` the "SHA256 checksum" you got from `Prepare-new-version.sh`
  - change in `"size":` the "Size" you got from `Prepare-new-version.sh`
- double check the syntax/format of the JSON file. In Notepad++ makes it is quite easy by using the [+] and [-] to see if your changes are correct.

When you have an own github and work localy use `git status` to verify your status.
- You may need to use `git add IDE_Board_Manager/prusa3dboards-<version>.tar.bz2`
- You need to commit your changes with `git commit -a`. Please try to document your changes as detailed as possible.

