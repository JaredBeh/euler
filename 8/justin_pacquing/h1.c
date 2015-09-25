#include <stdio.h>
#include <stdlib.h>

//Problem Sum square difference
int sumSquare(int num){
  int  i;
  int sum = 0;
  for (i = 1; i <= num; i++)
    sum += (i*i);
  return sum;
}

int squareSum(int num){
  int i;
  int sum = 0;
  for (i = 0; i <= num; i++)
    sum += i;
  return (sum * sum);
}

int diffSumSq(num){
  return (squareSum(num) - sumSquare(num));
}

//Problem Summation of Primes
int isPrime(int num){
  //printf("%d\n",num);
  int i;
  for (i = 2; i < num; i++){
    //printf("%d\n",i);
    if ( ( i * (num / i )) == num )
      return 0; //0 i false 
  }
  return 1; // 1 is true
}

long sumPrimes(){
  long sum = 0;
  int i;
  for (i = 2; i < 2000000; i++){
    if (isPrime(i) == 1){
      sum += i;
      printf("%d and %ld\n",i, sum);
    }
  }
  return sum;
}

int main(){
  //printf("Should be 1: %d\n", isPrime(2));
  //printf("Should be 1: %d\n", isPrime(23));
  //printf("Should be 0: %d\n", isPrime(4));
  //printf("Should be 0: %d\n", isPrime(99));
  //printf ("Sum of all primes below two million: %ld", sumPrimes());
  //printf("%d\n",diffSumSq(10));
  //printf("%d\n",diffSumSq(100));
  return 0;
}
