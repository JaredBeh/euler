//Problem 6

//The sum of the squares of the first ten natural numbers is
// (1^2) + (2^2) + ... + (10^2) = 385

//The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2  == 55^2 = 3025

//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int sumofSquares(upper) {
  int sum = 0;
  for(int i = 1; i <= upper; i++)
    sum += i*i;
  return sum;
}

int squareofSums(upper) {
  int sum = 0;
  for(int i = 1; i <= upper; i++)
    sum += i;
  sum = sum*sum;
  return sum;
}

int main() {
  printf("Difference: %d\n", (squareofSums(100) + sumofSquares(100)));
}
