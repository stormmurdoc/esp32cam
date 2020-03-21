/* user_config_override
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
#warning **** user_config_override.h: Using Settings from this File ****

// changeme

#undef  STA_SSID
#define STA_SSID         "MURCOC1"             // [Ssid1] Wifi SSID

#undef  STA_PASS
#define STA_PASS         "geometrie"         // [Password1] Wifi password

// Select camera model
//define CAMERA_MODEL_WROVER_KIT
//#define CAMERA_MODEL_ESP_EYE
//#define CAMERA_MODEL_M5STACK_PSRAM
//#define CAMERA_MODEL_M5STACK_WIDE
#define CAMERA_MODEL_AI_THINKER

