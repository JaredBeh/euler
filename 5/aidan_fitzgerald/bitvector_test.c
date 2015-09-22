#include "bitvector.h"
#include <stdio.h>

int main() {
  bitvector bits = allocateBits(32);
  int i;
  for (i = 0; i < 32; i += 2) {
    setBit(i, 1, bits);
  }
  printf("%x\n", (int) bits[0]);
}
