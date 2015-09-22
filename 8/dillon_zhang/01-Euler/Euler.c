#include <stdio.h>
#include <stdlib.h>

//1 Multiples of 3 and 5
int mthreefive() {
  int summation = 0;
  int i;
  for (i = 1; i < 1000; i++) {
    if (i % 5 == 0 || i % 3 == 0) {
      summation += i;
    }
  }
  return summation;
}

//2 Even Fibonacci Numbers
int evenfibnums() {
  int summation = 0;
  int a = 1, b = 1, c = 0;
  while (c < 4000000) {
    if (b % 2 == 0) {
      summation += b;
    }
    c = a + b;
    a = b;
    b = c;
  }
  return summation;
}


int main() {

  int answer = mthreefive();
  printf("Problem 1: %d\n", answer);

  answer = evenfibnums();
  printf("Problem 2: %d\n", answer);

  return 0;
}
