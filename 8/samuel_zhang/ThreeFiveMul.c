//Problem 1

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int sumofThrees(upper) {
  int i = upper / 3;
  int sum;
  for(int j = 1; j <= i; j++)
    sum += j*3;
  return sum;
}

int sumofFives(upper) {
  int i = upper / 5;
  int sum;
  for(int j = 1; j <= i; j++) {
    if((j*5) % 15 != 0) //Removes duplicate 15s
      sum += j*3;
  }
  return sum;
}

int main() {
  printf("Sum of 3 and 5 multiples below 1000: %d\n", (sumofThrees(1000) + sumofFives(1000)));
}

