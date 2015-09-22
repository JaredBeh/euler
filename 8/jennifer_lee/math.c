#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int threefive() {
  int sum = 0;
  int count;
  for (count = 1; count < 1000; count++) {
    if (count % 3== 0 || count % 5 == 0)
      sum += count;
  }
  return sum;
}

int evenFib() {
  int sum, ph = 0;
  int i, j = 1;
  while (j <= 4000000) {
    j += i; //adds Fn-1 and Fn-2
    if (j % 2 == 0)
      sum += j;
    ph = j;
    j = i;
    i = ph;
  }
  return sum;
}

/*too much time commitment
int palindrome() {
  int i, j;
  int product;
  for (i = 999; i > 99; i--)
    for (j = 999; j > 99; j--) {
      product = i*j;
      int nDigits = floor(log10(abs(product))) + 1;
      while (product%10 == product/10^(nDigits - 1)) {
	
      }
    }
  return product;
  }*/

int main() {
  printf("threefive is %d", threefive());
  printf("evenfib is %d", evenFib());
}
