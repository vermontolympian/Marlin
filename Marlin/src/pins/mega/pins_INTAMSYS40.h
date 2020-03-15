/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * CNControls V15 for HMS434 pin assignments
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#define BOARD_INFO_NAME "Intamsys 4.0"

//
// Servos
//
#define SERVO0_PIN          -1

//
// Limit Switches
//
//
// Limit Switches
//
#define X_MIN_PIN          22
#define X_MAX_PIN          -1
#define Y_MIN_PIN          26
#define Y_MAX_PIN          -1
#define Z_MIN_PIN          29
#define Z_MAX_PIN          69

#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  -1
#endif

//
// Steppers
//
#define X_STEP_PIN         -1
#define X_DIR_PIN          -1
#define X_ENABLE_PIN       -1//44

#define Y_STEP_PIN         -1
#define Y_DIR_PIN          -1
#define Y_ENABLE_PIN       -1//32

#define Z_STEP_PIN         -1//45
#define Z_DIR_PIN          -1
#define Z_ENABLE_PIN       -1//34

#define E0_STEP_PIN        69
#define E0_DIR_PIN         29
#define E0_ENABLE_PIN      22

//
// Temperature Sensors
// Analog Inputs
//
#define TEMP_0_PIN          8   // Analog InputD62 A8
#define TEMP_BED_PIN        10   // Analog Input D64 A10

#define TEMP_CHAMBER_PIN  9   // Analog Input D63

//
// Heaters
//
#define HEATER_0_PIN        2
#define HEATER_BED_PIN     4
#define HEATER_CHAMBER_PIN 3

//
// Fans
//
#define FAN_PIN             7

//
// Misc. Functions
//
#define SDSS               53
#define SD_DETECT_PIN      39
#define CASE_LIGHT_PIN      8

//
// LCD Controller
//
//#define BEEPER_PIN         18

  #define LCD_PINS_RS      20
  #define LCD_PINS_ENABLE  30
  #define LCD_PINS_D4      14
  #define LCD_PINS_D5      21
  #define LCD_PINS_D6       5
  #define LCD_PINS_D7      6
  #define BTN_EN1        40
  #define BTN_EN2        41
  #define BTN_ENC        19


// Common I/O

#define FIL_RUNOUT_PIN      10
//#define BATTERY     38
#define BEEPER_PIN         -1
