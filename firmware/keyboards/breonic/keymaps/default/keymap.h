#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include <array>

#ifndef KEYMAP_H
#define KEYMAP_H

#define _L0 0
#define _L1 1
#define _L2 2
#define _L3 3

void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;

#endif /* KEYMAP_H */