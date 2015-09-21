#include <stdio.h>

int euler1() {
  int i = 0;
  int sum = 0;
  for (i = 0; i < 10000; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int fib(n) {
  if (n < 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

int euler2() {
  int i = 0;
  int sum = 0;
  for (i = 0; fib(i) < 4000000; ++i) {
    int tmp = fib(i);
    if (fib(i) % 2 == 0 ) {
      sum += fib(i);
    }
  }
  return sum;
}

int main() {

  printf("%i\n", euler1());
  printf("%i\n", euler2());
  return 0;
}
