#pragma once

// #include "config_common.h"

// #define VENDOR_ID
// #define PRODUCT_ID
// #define DEVICE_VR
#define MANUFACTURER "thoto"
#define PRODUCT "daktuehl"
#define MATRIX_ROWS 10
#define MATRIX_COLS 5
// #define SPLIT_HAND_PIN C0
#define SPLIT_HAND_PIN A7
// #define SOFT_SERIAL_PIN D0 -> FIXME
//
// #define SPLIT_LAYER_STATE_ENABLE

// #define SERIAL_USART_TX_PIN A9
// #define SERIAL_USART_RX_PIN A10
// #define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_HALF_DUPLEX

#define MATRIX_ROW_PINS { B3, B4, B5, B6, B7}
#define MATRIX_ROW_PINS_RIGHT { B3, B4, B5, B6, B7}
#define MATRIX_COL_PINS { A0, A1, A2, A3, A4}

#define DIODE_DIRECTION COL2ROW

// #define USB_SUSPEND_WAKEUP_DELAY 0
//
