# assiboard

![assiboard](imgur.com image replace me!)

This folder includes the final layout for an assistive keyboard for a child with ataxia.
The layout acommodates the user for easier navigation and typing.

* Keyboard Maintainer: [Martin](https://github.com/MMilanoski)
* Hardware Supported: Pro Micro - 5V/16MHz
* Hardware Availability: https://www.aliexpress.com/w/wholesale-promicro-atmega32u4.html?g=y&SearchText=promicro+atmega32u4&sortType=price_asc

Make example for this keyboard (after setting up your build environment):

    make assiboard:default

Flashing example for this keyboard:

    make assiboard:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways (bootmagic needs to be set to true):

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (Ѝ) and plug in the keyboard
* **Physical reset button**: Briefly press the button on PCB
