#include <stdio.h>

int summult35(){
  int result = 0;
  int count = 1;
  while (count<1000){
    if (count%3==0||count%5==0){
      result+=count;
    } count++;
  } printf("Sum of multiples of 3 and 5 under 1000: %d\n", result);
  return 0;
}

int sumfib(){
  int result = 2;
  int fib1 = 1;
  int fib2 = 2;
  int fib3;
  while (fib2 < 4000000){
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
    if(fib2%2 == 0){
      result+=fib2;
    }
  } printf("Sum of even fibonacci numbers: %d\n", result);
  return 0;
}

int main(){
  summult35();
  sumfib();
}
