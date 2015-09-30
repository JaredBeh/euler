#include <stdlib.h>

/* integer quotient and remainder 64 */
#define div8(n) (n >> 8)
#define mod8(n) (n & 7)

/* pointer so it can be any length */
typedef char *bitvector;

bitvector allocateBits(unsigned int bits) {
  return calloc(div8(bits) + 1, 1);
}

char getBit(unsigned int i, bitvector yolo) {
  char swag = (yolo[div8(i)] & (1 << mod8(i)) ) >> mod8(i);
  return swag;
}

void setBit(unsigned int i, char val, bitvector yolo) {
  char mask = 1 << mod8(i);
  if (val) {
    yolo[div8(i)] |= mask;
  }
  else {
    yolo[div8(i)] &= ~mask;
  }
}
