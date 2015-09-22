#include <stdio.h>

int sum3or5(int n) {
  int i;
  int final = 0;
  for (i = 0; i < n; i++)
    if ((i % 3 == 0) || (i % 5) == 0)
      final += i;
  return final;
}

int sumSquares(int n) {
  int i;
  int final = 0;
  for (i = 1; i <= n; i++)
    final += i * i;
  return final;
}

int squareSum(int n) {
  int i;
  int final = 0;
  for (i = 1; i <= n; i++)
    final += i;
  return final * final;
}

int difference(int n) {
  return squareSum(n) - sumSquares(n);
}

int main() {
  printf("Sum of multiples or 3 or 5 below 10: %d\n", sum3or5(10));
  printf("Sum of multiples of 3 or 5 below 1000: %d\n", sum3or5(1000));
  printf("Difference for numbers under 10: %d\n", difference(10));
  printf("Difference for numbers under 100: %d\n", difference(100));
  return 0;
}
