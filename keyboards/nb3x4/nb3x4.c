#include "nb3x4.h"

int pwm_level;

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    matrix_init_user();

    // JTAG disable for PORT F. write JTD bit twice within four cycles.
    MCUCR |= (1<<JTD);
    MCUCR |= (1<<JTD);
};
