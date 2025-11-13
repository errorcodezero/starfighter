#ifndef INCLUDE_SRC_VM_H_
#define INCLUDE_SRC_VM_H_

#include <stdint.h>

#define MEMORY_WIDTH 0xA00000000

// typedef struct Clock {
// } Clock;

typedef struct SetAssociativeCache {
  // split our cached memory into different lines based on the starting digit in
  // hex
  void *cacheLines[0x10];
} SetAssociativeCache;

typedef struct Core {
  uint32_t registers[16];
  SetAssociativeCache cacheT1;
} Core;

typedef struct Emulator {
  Core cores[4];
  uint8_t memory[MEMORY_WIDTH];
} Emulator;

#endif // INCLUDE_SRC_VM_H_
