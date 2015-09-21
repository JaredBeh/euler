#include <stdlib.h>
#include <stdio.h>

int euler1(){
  int sum = 0;
  int i;
  for(i = 1; i < 1000; i ++){
    if(i % 3 == 0){
      sum = sum + i;
    }
    if(i % 5 == 0){
      sum = sum + i;
    }
  }
  for(i = 1; i < 1000; i ++){
    if(i % 15 == 0){
      sum = sum - i;
    }
  }
  return sum;
}

int euler2(){
  int fib1 = 1;
  int fib2 = 2;
  int sum = 0;
  while(fib1 < 4000000 && fib2 < 4000000){
    if(fib1 % 2 == 0){
      sum = sum + fib1;      
    }
    if(fib2 %2 == 0){
      sum = sum + fib2;
    }
    fib1 = fib1 + fib2;
    fib2 = fib1 + fib2;
  }
  return sum;
}

int euler5(){
  int divide = 1;
  int num = 1;
  while(divide != 20){
    divide = divide + 1;
    if(num % divide != 0){
      divide = 1;
      num = num + 1;
    }
  }
  return num;
}

int main(){
  printf("Euler1 = %d\n", euler1());
  printf("Euler2 = %d\n", euler2());
  printf("Euler5 = %d\n", euler5());
  return 0;
}
