#include <stdio.h>

int main(){
  int i, sum, sumSquares, squareSum;
  for( i = 0; i < 101; i++){
    sumSquares += (i * i);
    sum += i;
  }
  squareSum = sum * sum;
  
  printf("%i \n", sumSquares-squareSum);
  return  sumSquares - squareSum;

}
