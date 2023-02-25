# shahnetwork keyboard

*Dactyl-manuform like keyboard, using a very slightly modified [TBK mini](https://github.com/sagepeppermint/TBK-Mini)*

* Keyboard Maintainer: [sagepeppermint](https://github.com/sagepeppermint)
* Hardware Supported: *KB2040*

Make example for this keyboard:

    make shahnetwork/c:default

Flashing this keyboard:

    make shahnetwork/c:default:uf2-split-left
    make shahnetwork/c:default:uf2-split-right

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the superior-medial most key on either side and plug in the keyboard
* **Physical reset button**: Accessible inside case with angled tweezers press RESET down (most medial key) whist plugging in
* **Keycode in layout**: Press the key mapped to `QK_BOOT`, accessed by right side medial thumb key plus 1st row 6th column key
