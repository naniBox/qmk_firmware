#ifndef NB3X4_H
#define NB3X4_H

#include "quantum.h"


/* nb3x4 matrix layout
 * .-------------------.
 * |  F1|  F2|  F3|  F4|
 * |-------------------|
 * |  F5|  F6|  F7|  F8|
 * |-------------------|
 * |  F9| F10| F11| F12|
 * '-------------------'
 */
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13, \
    k20, k21, k22, k23  \
) { \
    { k00, k01, k02, k03, }, \
    { k10, k11, k12, k13, }, \
    { k20, k21, k22, k23  }  \
}

#endif
