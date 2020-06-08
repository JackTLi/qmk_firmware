#include "rev2.h"
#include "led.h"

void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up
  matrix_init_user();
  led_init_ports();
};

void led_init_ports(void) {
  setPinOutput(F5);
  writePinLow(F5);
}

bool led_update_kb(led_t led_state) {
  if(led_update_user(led_state)) {
    writePin(F5, led_state.caps_lock);
  }

  return true;
}
