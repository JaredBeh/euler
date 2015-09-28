#include <stdio.h>

int pep1() { //Project Euler problem 1
  int sum = 0;
  int num;
  for(num = 1;num<100;num++) {
    if ((num % 3 == 0) || (num % 5 == 0)) {
      sum = sum + num;
    }
  }
  return sum;
}
int main() {
  printf("Answer to project euler Problem 1 is %d\n", pep1());
  return 0;
}
