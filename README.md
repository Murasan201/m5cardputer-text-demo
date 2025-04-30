# m5cardputer-text-demo

A simple Arduino demo that displays custom text on the M5Cardputer’s built-in LCD screen.

## Prerequisites

- Arduino IDE (version 1.8.13 or later)
- ESP32 board support package
- M5Stack board definitions
- M5Cardputer library

## Setup

1. **Install ESP32 support**  
   - In Arduino IDE, go to **File → Preferences** and add `https://dl.espressif.com/dl/package_esp32_index.json` to the "Additional Boards Manager URLs".  
   - Open **Tools → Board → Boards Manager**, search for `esp32`, and install the package.

2. **Install M5Stack board definitions**  
   - In **File → Preferences**, add `https://m5stack.oss-cn-shenzhen.aliyuncs.com/resource/arduino/package_m5stack_index.json` to the "Additional Boards Manager URLs".  
   - Open the Boards Manager, search for `M5Stack`, and install the official package.  
   - Select **M5Cardputer** under **Tools → Board**.

3. **Install the M5Cardputer library**  
   - Go to **Sketch → Include Library → Manage Libraries…**, search for `M5Cardputer`, and install the library.

4. **Restart Arduino IDE**

## Usage

1. Open `text-test.ino` in Arduino IDE.  
2. Select **M5Cardputer** under **Tools → Board**.  
3. Connect your M5Cardputer via USB.  
4. Press **G0** while powering on to enter download mode.  
5. Click the upload button in the IDE.  
6. After flashing, the LCD will display the greeting.

## File Structure

```
m5cardputer_lcd_text_demo.ino
README.md
```

## Author

**Murasan**  
Website: https://murasan-net.com/
