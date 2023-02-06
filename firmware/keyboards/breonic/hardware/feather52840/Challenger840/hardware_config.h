#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS {4, 5, 28, 29, 2 }
#define MATRIX_COL_PINS {17, 21, 23, 6, 7, 27, 47, 45, 46, 42, 44, 43 }
#define UNUSED_PINS {}

#define DIODE_DIRECTION COL2RO

#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN 30

#define VCC_PIN 41
#define VCC_POLARITY_ON 1

#define  STATUS_BLE_LED_PIN 26 // LED1 GREEN
#define  BLE_LED_ACTIVE 1
#define  BLE_LED_POLARITY 1

#define  STATUS_KB_LED_PIN 12  // LED2 BLUE
#define  STATUS_KB_LED_ACTIVE 1
#define  STATUS_KB_LED_POLARITY 1

#endif /* HARDWARE_CONFIG_H */
