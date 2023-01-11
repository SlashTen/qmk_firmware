/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID  0x3537
#define DEVICE_VER  0x0001
#define PRODUCT     Tractyl Manuform(4x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F4, F5, F6, F7, D0 }

#define DIODE_DIRECTION COL2ROW

#define EE_HANDS

#define TAPPING_TOGGLE 2

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095
#define DYNAMIC_KEYMAP_LAYER_COUNT     16
#define LAYER_STATE_16BIT

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D1


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* PMW3360 Settings */
#define PMW3360_CS_PIN           		B6
#define POINTING_DEVICE_RIGHT
#define ROTATIONAL_TRANSFORM_ANGLE     	25
#define POINTING_DEVICE_INVERT_X
#define PMW3360_LIFTOFF_DISTANCE 		0x02
#define POINTING_DEVICE_ROTATION_270
#define POINTING_DEVICE_MOTION_PIN		D2
