#  Assistive Keyboard

## 📌 Overview
The **Assistive Keyboard** is a hardware–software solution designed to help individuals with motor impairments interact with computers more easily. 
The design was inspired by redox and redox_media keyboards from the QMK firmware framework. The idea behind the implementation is to simplify the keyboard interface and leave only the essential functionalities while keeping the keyboard split into two halfs.
This repository contains:

-  **3D printable models**
-  **Hardware circuit diagrams**
-  **Firmware**
-  **Documentation**

---

## Features
- Ergonomic 3D-printed split design optimized for accessibility  
- Modular or customizable key layout  
- Microcontroller-based hardware  
- USB/HID interface support  

---

## 3D Models
All printable parts are located in `/3D model/`.

### Contents
- Enclosure  
- Keycaps / Key mechanisms  
- Mounting supports  

---

## Hardware
All schematics are provided under `/hardware/kicad`.

### Components
- Microcontroller: ATmega32U4 (Arduino Micro)  
- Keyboard Switches: Mechanical Cherry/Gateron/Kailh Compatible
- Power: 5V USB
- Connectivity: USB HID / Aux Serial Communication (Bitbang)
- Other: LED Diodes, Diodes, Wires

---

## Firmware

### Prerequisites
- **QMK MSYS**
- **Editor of your choice**
- **AVRDUDESS**
> **Supported OS:** Windows, MacOS, Linux/WSL, FreeBSD

### Intallation

To setup the QMK enviormnment, you can follow the guide in the following link: https://docs.qmk.fm/newbs_getting_started

At the moment, the keyboard is not included in the official QMK repo. To be able to compile it, add the assiboard folder to the QMK keyboards folder.

### Keyboard layout

To see more information about the key layout, in QMK MSYS you can run the following command:

```bash
qmk info -l -kb assiboard
```

The layout that we used is the following:

┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐
│Ѝ ││1 ││2 ││3 ││4 ││5 ││6 │                    │7 ││8 ││9 ││0 ││- ││= ││Ba│
└──┘└──┘└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘└──┘└──┘
┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐
│Ta││Љ ││Њ ││Е ││Р ││Т ││Ѕ │                    │У ││И ││О ││П ││Ш ││Ѓ ││Ж │
└──┘└──┘└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘└──┘└──┘
┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐┌──────┐
│Ca││А ││С ││Д ││Ф ││Г ││Х │                    │Ј ││К ││Л ││Ч ││Ќ ││Enter │
└──┘└──┘└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘└──────┘
┌──────┐┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐┌──────┐┌──┐
│Shift ││З ││Џ ││Ц ││В ││Б │                    │Н ││М ││, ││. ││/ ││Shift ││Up│
└──────┘└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘└──────┘└──┘
    ┌──┐┌──┐┌──┐┌──────────┐                    ┌──────────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐
    │Ct││Wi││Al││Space     │                    │Space     ││Al││Me││Ct││Le││Do││Ri│
    └──┘└──┘└──┘└──────────┘                    └──────────┘└──┘└──┘└──┘└──┘└──┘└──┘


### Compile 
To create a hex file, you need to run the following command:

```bash
qmk compile -kb assiboard -km default
```

### Flashing

You will need to flash each microcontroller with the same firmware, but you will need to distingusing between left and right part.
Before you flash the firmware, you will need to set the microcontroller into bootloader mode. Do that by rapidly double-pressing the reset button.

After entering bootloader more, use the following commands respectively:

```bash
qmk flash -kb assiboard -km default -bl avrdude-split-left
qmk flash -kb assiboard -km default -bl avrdude-split-right
```

## Acknowledgements

If you like this project please cite our paper - Milanoski M., V. Kitanovski, M. Zajkov, N. Jovanovski, D. Todorovska, and B. Gerazov, “Assistive Keyboard for Children With Ataxia,” In Proceedings of ETAI 2024, pp. 87 – 90, Struga, Macedonia, 21 – 23 Sep 2024.

**Follow us:**  
[!Говор @ ФЕИТ](https://speech.feit.ukim.edu.mk/)

