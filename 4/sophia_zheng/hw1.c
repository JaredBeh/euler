
#include<stdio.h>

/* METHODS FOR PROBLEM 1 */
int SumOfMultiplesUnder( int multipleOf, int under ){
  int i;
  int sum = 0;

  for (i = 0; i < under; i ++)
    if (i % multipleOf == 0)
      sum += i;

  return sum;
}

/* METHODS FOR PROBLEM 2 */
int SumEvenFib() {
  int a = 1;
  int b = 1;
  int sum = 0;
  int c = 0;
  while (c <= 4000000){
    c = a + b;
    if (c % 2 == 0)
      sum += c;
    a = b;
    b = c;
  }

  return sum;
}

/* MAIN */
int main() {

  /* Problem 1 */
  int total = SumOfMultiplesUnder( 3, 1000 ) + SumOfMultiplesUnder( 5, 1000 ) - SumOfMultiplesUnder( 15, 1000 );
  printf("Problem 1 (Sum of multiples of 3 and 5 below 1000): %d\n" , total);

  /* Problem 2 */
  printf("Problem 2 (Sum of even fibonacci numbers not exceeding 4000000): %d\n", SumEvenFib());
}


