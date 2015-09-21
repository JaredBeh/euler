#include <stdio.h>
#include <math.h>

/* unsigned cuz I hate complex numbers ;) */
unsigned int isqrt(unsigned long n) {
  double sr = sqrt((double) n);
  return (unsigned int) sr;
}

int main() {
  const unsigned long NUM = 600851475143; /* ah thank god, I don't have to append L */
  const unsigned int flemsize = isqrt(NUM);

  printf("To factorize %ld\nAllocate %d spaces\n", NUM, flemsize);

  /*  long factors[flemsize]; */

  return 0;
}
