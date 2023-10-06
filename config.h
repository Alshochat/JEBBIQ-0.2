/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

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

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 1)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 1)

// wiring
#define MATRIX_ROW_PINS_MCU \
    { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS_MCU \
    { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18 }
#define MATRIX_ROW_PINS_MCP \
    { }
#define MATRIX_COL_PINS_MCP \
    { B4, B3, B2, B1, B0 } 

#define MATRIX_ROW_PINS \
    { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS \
    { B4, B3, B2, B1, B0, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* i2c settings */

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN GP21
#define I2C1_SDA_PIN GP20
#define OLED_SDA_PIN GP26
#define OLED_SCL_PIN GP27
#define LED_CONTROL_PIN GP22
// #define I2C1_TIMINGR_PRESC 2U
// #define I2C1_TIMINGR_SCLDEL 1U
// #define I2C1_TIMINGR_SDADEL 0U
// #define I2C1_TIMINGR_SCLH 9U
// #define I2C1_TIMINGR_SCLL 26U
// #define I2C1_SCL_PAL_MODE 1
// #define I2C1_SDA_PAL_MODE 1
