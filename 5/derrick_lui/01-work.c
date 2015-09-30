#include <stdio.h>
#include <stdlib.h>

int main(){
  //Problem 1
  int result1 = 0;
  int i;
  for (i = 0;i<1000;i++){
    if ((i%3) == 0){
      result1 = result1 + i;
    }
    else if ((i%5) == 0){
      result1 = result1 + i;
    }
  }  
  printf("Problem 1 = %d\n", result1);
  // 233,168

  //Problem 2
  int fib3 = 0;
  int l;
  int fib1 = 1;
  int fib2 = 2;
  int result2 = 0;
  while (fib3 < 4000000){
    fib3 = fib1 + fib2;
    fib2 = fib3;
    fib1 = fib2;
    if ((fib3 % 2) == 0){
      result2 = result2 + fib3;
    }
  }

  printf("Problem 2 = %d\n", result2);
}
