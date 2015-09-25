#include <stdio.h>

int mult() {
  int sum = 0;
  int i = 0;
  for (i = 1; i <= 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum+= i;
  }
  printf( "sum = %d \n", sum);
  return sum;
}

int evenFibs(int i, int j, int sum) {
  if ( j <= 4000000 ) {
    //printf("i = %d \n", i);
    if ( i % 2 == 0 ) { 
      //printf("sum = %d \n", sum);
      sum+=i;
      //printf("sum = %d \n", sum);
    }
    evenFibs(j, j+i, sum);
  }
  printf("sum = %d \n", sum);
  return sum;
}

int main() {
  printf("Sum of all multiples of 3 or 5 below 1000: \n" );
  mult();
  printf("Sum of all even fibonacci numbers below 4 million: \n");
  printf("sum = %d \n", evenFibs(1, 2, 0) );
}
