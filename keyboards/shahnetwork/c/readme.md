# shahnetwork keyboard

*Dactyl-manuform like keyboard, using a very slightly modified [TBK mini](https://github.com/sagepeppermint/TBK-Mini)*

* Keyboard Maintainer: [sagepeppermint](https://github.com/sagepeppermint)
* Hardware Supported: *KB2040*

Make example for this keyboard (after setting up your build environment):

    make handwired/shahnetwork:default

Flashing this keyboard:

    make handwired/shahnetwork:default:uf2-split-left
    make handwired/shahnetwork:default:uf2-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the superior-medial most key on either side and plug in the keyboard
* **Physical reset button**: Accessible inside case with angled tweezers press RESET down (most medial key) whist plugging in
* **Keycode in layout**: Press the key mapped to `QK_BOOT`, accessed by right side medial thumb key plus 1st row 6th column key
