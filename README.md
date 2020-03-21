# ESP32 Cam

This is a simple webserver which streams the output of the cam.

# Installation

## Setup your WIFI credentials

Edit the file src/user_config.h


# Build

## Setup your config

Copy the example file:
         cd src
         cp user_config_override_sample.h user_config_override.h

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

# Issues

         esp32cam/src/CameraWebServer.ino:3:34: fatal error: user_config_override.h: No such file or directory

In this case please goto into the esp32cam/src directory and type
         cp user_config_override_sample.h user_config_override.h

__Note: Don't forget to update your WIFI Credentials.__
