#ifndef INCLUDE_SRC_VM_H_
#define INCLUDE_SRC_VM_H_

#include <stdint.h>

typedef struct Clock {
} Clock;

typedef struct Core {
  uint32_t registers[16];
  Clock clock;
} Core;

typedef struct Emulator {
  Core cores[4];
  Clock master_clock;
} Emulator;

#endif // INCLUDE_SRC_VM_H_
