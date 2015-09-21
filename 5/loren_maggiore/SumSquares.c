#include <stdio.h>


int sumSq(int x){
  int sum = 0;
  for (x; x>0; x--){
    sum += x *x;
  }
  return sum;
}


int sqSum(int x){
  int sum = 0;
  for (x; x>0; x--){
    sum += x;
  }
  return sum * sum;
}

int main(){
  //printf("Enter a number to get the sum of squares, square of sums, and the difference between the two.");

  int input = 10; //put the number here because i dont understand scanf
  int sumSquares = sumSq(input);
  int squareSums = sqSum(input);
  int diff = squareSums - sumSquares;
  printf("SumSq = %i; SqSum = %i; Diff = %i\n", sumSquares, squareSums, diff);


}


