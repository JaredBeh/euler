#include <stdio.h>

int main() {

  int fib1 = 1;
  int fib2 = 2;

  int s = 0;

  while (fib2 < 4000000) {
    if (fib2 % 2 == 0) {
      s += fib2;
    }
    int fibnew = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibnew;
  }
    
    printf("%d\n", s);
    return s;

}
