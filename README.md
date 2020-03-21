# ESP32 Cam

This is a simple webserver which streams the output of the cam.

# Installation

## Setup your WIFI credentials

Edit the file src/user_config.h


# Build

To build the code please type

         make

# Upload code to the ESP32CAM

Make sure that you have selected the right TTY port.
Default: /dev/ttyUSB0

         make upload

# Monitor the serial console

Just type the following command in your shell

         pio device monitor -b 115200

# PlatformIO vim setup

Please the checkout the [PlatformIO Vim Setup](https://docs.platformio.org/en/latest/integration/ide/vim.html "Link") Website for more information.
