#include "pad_harmony.h"
int pad_notes(uint8_t key, pad_mode mode, pad_chord chord, uint8_t notes[4]) {
    unsigned middle;
    if (!notes || key > 11 || (mode != PAD_MAJOR && mode != PAD_MINOR) ||
        (chord != PAD_TRIAD && chord != PAD_SUS2 && chord != PAD_SUS4)) return 0;
    middle = chord == PAD_SUS2 ? 2 : chord == PAD_SUS4 ? 5 : mode == PAD_MAJOR ? 4 : 3;
    notes[0] = (uint8_t)(48 + key);
    notes[1] = (uint8_t)(55 + key);
    notes[2] = (uint8_t)(60 + key + middle);
    notes[3] = (uint8_t)(72 + key);
    return 1;
}
