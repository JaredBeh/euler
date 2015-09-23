#include <stdio.h>

int main(){
  
  printf("\n%d <-- should be 1\n",powerDigitSum(2, 0));
  printf("%d <-- should be 2\n",powerDigitSum(2, 1));
  printf("%d <-- should be 4\n",powerDigitSum(2, 2));
  printf("%d <-- should be 7\n",powerDigitSum(2, 4));
  printf("%d <-- should be 5\n", powerDigitSum(2, 5));
  printf("%d <-- should be 7\n\n",powerDigitSum(2, 10));
  
  printf("%d <-- should be 2640\n", sumSquareDiff(10));
  printf("%d\n\n", sumSquareDiff(100));
  return 0;
}

int powerDigitSum(int base, int exp){
  int prod = exponent(base, exp);
  int sum = 0;
  while (prod > 0){
    sum += prod % 10;
    prod = prod / 10;
  }
  return sum;
}

int exponent(int base, int exp){
  int prod = 1;
  int c;
  for (c = 0; c < exp; c ++){
    prod *= base;
  }
  return prod;
}

int sumSquareDiff(int max){
  return squareOfSums(max) - sumOfSquares(max);
}

int sumOfSquares(int max){
  int sum = 0;
  int c;
  for (c = 1; c <= max; c ++){
    sum += exponent(c, 2);
  }
  return sum;
}
int squareOfSums(int max){
  int sum = 0;
  int c;
  for (c = 1; c <= max; c ++){
    sum += c;
  }
  return exponent(sum, 2);
}
