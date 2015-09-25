#include <stdio.h>
#include <stdlib.h>

//problem 1:sum of multiples of 3 or 5 under 1000 
int prob1(){
  int i;
  int sum = 0;
  for (i = 1; i < 1000; i++){
    if (!(i % 3) || !(i % 5)){
      sum += i;
    }
  }
  return sum;
}

//problem 2:sum of fibonacci nums under 4000000
int prob2(){
  int total = 0;
  int current, last, temp;
  for (current = last = 1; current < 4000000;){
    total += current;
    temp = current + last;
    last = current;
    current = temp;
  }
  return total;
}

//problem 10:sum of primes under 2 million
int prob10(){
  int i;
  int sum = 0;
  for (i = 2; i < 2000; i++){
    if (isPrime(i)){
      sum += i;
    }
  }
  return sum;
}

int isPrime(int prime){
  int i;
  for (i = 2; i < prime / 2; i++){
    if (!(prime % i)){
      return 0;
    }
  }
  return 1;
}

int main(){
  printf("%d", prob10(41));
}
