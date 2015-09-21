#include <stdio.h>
#include <stdlib.h>

int mult3or5(int num) {
  if (num % 3 == 0 || num % 5 == 0) {
    return 1;
  }
  return 0;
}

int euler1() {
  int i;
  int sum = 0;
  for (i = 999; i > 0; i--) {
    if (mult3or5(i) == 1) {
      sum += i;
    }
  }
  return sum;
}

int reverseInt(int prod) {
  int rev = 0;
  while (prod != 0) {
    rev *= 10;
    rev += prod % 10;
    prod /= 10;
  }
  return rev;
}

int euler4() {
  short counter1 = 999;
  short counter2 = 999;
  int prod;
  int rev;
  int match;
  while (counter1 > 99) {
    while (counter2 > 99) {
      prod = counter1 * counter2;
      rev = reverseInt(prod);
      if (prod == rev) {
        if (prod > match) {
          match = prod;
        }
      }
      counter2 -= 1;
    }
    counter2 = 999;
    counter1 -= 1;
  }
  return match;
}

int div20(int num) {
  int i;
  for (i = 1; i <= 20; i++) {
    if (num % i != 0) {
      return 0;
    }
  }
  return 1;
}

int euler5() {
  int num = 1;
  while (div20(num) != 1){
    num += 1;
  }
  return num;
}

int main() {

  printf("Euler1: %d\n" , euler1());
  printf("Euler4: %d\n" , euler4());
  printf("Euler5: %d\n" , euler5());

  return 0;
}
