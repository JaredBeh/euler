#include <stdio.h>

int main() {

  // PROBLEM 1: MULTIPLES OF 3 AND 5
  int i;
  int sum;
  for(i=0; i<1000; i++) {
    if(i%3 == 0 || i%5 == 0) {
      sum = sum + i;
    }
  }
  printf("Problem 1: %d\n", sum);

}
