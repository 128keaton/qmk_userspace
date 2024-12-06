#include "128keaton.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
 	case KC_TERM_PRGM:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c"));
            }
	break;
  }
  return process_record_keymap(keycode, record);
}
