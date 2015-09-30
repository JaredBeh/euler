/* Compile with -lm option */

#include <stdio.h>
#include <math.h>

#define getBit(i, bitvector) (bitvector[i / 64] & (1 << i % 64)) >> i % 64
#define setBit(i, bitvector) bitvector[i / 64] |= 1 << i % 64

/* unsigned cuz I hate complex numbers ;) */
unsigned int isqrt(unsigned long n) {
  double sr = sqrt((double) n);
  return (unsigned int) sr;
}

int main() {
  const unsigned long NUM = 600851475143;
  unsigned long n = NUM;
  const unsigned int maxTest = isqrt(NUM) + 1;
  const unsigned int spaces = maxTest / 64 + 1;

  printf("To factorize %ld\nAllocate %d spaces (%d bits)\n", NUM, spaces, maxTest);

  /* sieve is where we mark off multiples of prime numbers that have been tested */
  unsigned long factors[spaces];

  unsigned long sieve[spaces];
  setBit(0, sieve);
  setBit(1, sieve);

  unsigned int p;

  for (p = 2; p < maxTest && n > 1; p++) {

    if (!getBit(p, sieve)) {

      /* mark off p if it is factor of n */
      if (n % p == 0) {
	setBit(p, factors);
	while (n % p == 0) {
	  n /= p;
	}
      }

      /* mark off multiples of p, regardless of what happened */
      unsigned int multiple;
      for (multiple = p; multiple < maxTest; multiple++) {
	setBit(multiple, sieve);
      }

    }

  }

  /* find max prime factor */
  unsigned int maxFactor;

  /* quick way to find the block it's in */
  for (maxFactor = spaces - 1; maxFactor > 0; maxFactor--) {
    if (factors[maxFactor]) {
      break;
    }
  }

  /*
    then find the highest bit
    adapted from http://stackoverflow.com/a/53175
  */
  unsigned long block = factors[maxFactor];
  maxFactor *= 64;

  while (block >>= 1) {
    maxFactor++;
  }

  printf("Largest prime factor: %d\n", maxFactor);

  return 0;
}
