#include <stdio.h> //standard input output
#include <stdlib.h> //standard library
//#include "mylib.h"

int main(){
  int answer=0;
  int i = 1;
  while (i<1000){
    if (i%3==0 || i%5==0){
      answer+=i;
    }
    i++;
  }
  //Problem 1
  //printf("Hi... Bye.\n");
  //printf("bob = %f\n", bob);
  printf("%d\n",answer);
  //return answer;
  //233168

  int a1=1;
  int a2=2;
  int a3=0;
  answer=2;
  while (a1 + a2 < 4000000){
    if ((a1+a2)%2==0){
      answer+=a1+a2;
    }
    a3 = a1;
    a1 = a2;
    a2 = a3 + a1;
  }
   printf("%d\n",answer);
   //4613732

   long Prime1 = prime(600851475143);
   printf("%ld\n", Prime1);

   return 1;

   
}

int prime(long num){
  char prime = 0;
  long primeNum = 1;
  long tempPrime = 2;
  while (tempPrime<num/2+1){
    if (num%tempPrime==0){
      primeNum = tempPrime;
    }
    tempPrime++;
  }
  return primeNum;
}
