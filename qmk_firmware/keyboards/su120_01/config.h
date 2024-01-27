// Copyright 2024 Masatomi KINO (@Masatomi KINO)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define MATRIX_ROW_PINS { F6, F7, B1, B3  }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7 }


// /* Rotary encoder */
// #define ENCODERS_PAD_A_RIGHT { F5, B5 }
// #define ENCODERS_PAD_B_RIGHT { F4, B4 }
// #define ENCODER_RESOLUTION 4

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2 // or D1, D2, D3, E6
