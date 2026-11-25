#ifndef PAD_HARMONY_H
#define PAD_HARMONY_H
#include <stdint.h>

typedef enum { PAD_MAJOR = 0, PAD_MINOR = 1 } pad_mode;
typedef enum { PAD_TRIAD = 0, PAD_SUS2 = 1, PAD_SUS4 = 2 } pad_chord;
/* Returns 1 on success, 0 for invalid arguments. C=0 ... B=11.
 * Four MIDI notes: root, fifth, chord color, octave. */
int pad_notes(uint8_t key, pad_mode mode, pad_chord chord, uint8_t notes[4]);
#endif
