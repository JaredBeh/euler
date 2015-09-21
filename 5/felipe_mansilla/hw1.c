//Project Euler problems

#include <stdio.h>

int main() {
  //Problem one
  int x = 0;
  int result = 0;
  while (x < 1000) {
    if (x % 3 == 0 || x % 5 == 0) {
      result += x;
    }
    x ++;
  }
  printf("Problem 1 \n");
  printf("Sum of all multiples of 3 or 5 below 1000 is: %d \n", result);
  printf("\nProblem 6 \n");

  //Problem six
  int y = 1;
  long resultt = 0;
  int sum = 0;
  int sumsq = 0;
  while (y < 101) {
    sum += y;
    sumsq += (y*y);
    y ++;
  }
  resultt = (sum * sum) - sumsq;
  printf("Sum square difference of first 100 numbers: %ld \n", resultt);
    
  
}
