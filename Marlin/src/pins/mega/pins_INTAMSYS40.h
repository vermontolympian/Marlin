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
#define X_STEP_PIN         25
#define X_DIR_PIN          23
#define X_ENABLE_PIN       27//44

#define Y_STEP_PIN         32//33
#define Y_DIR_PIN          33//31 //32
#define Y_ENABLE_PIN       31//32

#define Z_STEP_PIN         35//35
#define Z_DIR_PIN          36
#define Z_ENABLE_PIN       34//34

#define E0_STEP_PIN        42
#define E0_DIR_PIN         43
#define E0_ENABLE_PIN      37

#define E1_STEP_PIN        49
#define E1_DIR_PIN         47
#define E1_ENABLE_PIN      48

#define MOTOR_CURRENT_PWM_X_PIN  11
#define MOTOR_CURRENT_PWM_Y_PIN  44
#define MOTOR_CURRENT_PWM_Z_PIN  45
#define MOTOR_CURRENT_PWM_E_PIN  46

// Motor current PWM conversion, PWM value = MotorCurrentSetting * 255 / range
#ifndef MOTOR_CURRENT_PWM_RANGE
  #define MOTOR_CURRENT_PWM_RANGE 2000
#endif
#define DEFAULT_PWM_MOTOR_CURRENT  {1300, 1300, 1250}

///////////////UNPOPULATED SOCKETS////////////////

#define E2_STEP_PIN        49
#define E2_DIR_PIN         47
#define E2_ENABLE_PIN      48

#define E3_STEP_PIN        49
#define E3_DIR_PIN         47
#define E3_ENABLE_PIN      48

#define E4_STEP_PIN        49
#define E4_DIR_PIN         47
#define E4_ENABLE_PIN      48

#define E5_STEP_PIN        49
#define E5_DIR_PIN         47
#define E5_ENABLE_PIN      48


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
#define PS_ON_PIN     38 // UPS Module
#define BEEPER_PIN         18
