#include <stdlib.h>
#include <stdio.h>

int ret;

int fib(){
  int x = 1;
  int y = 1;
  int temp;
  while( y < 4000000){
    temp = x + y;
    x = y;
    y = temp;
    if(isEven(y))
      ret += y;
  }
}

int isEven(int input){
  return(input % 2 == 0);
}

int main(){
  ret = 0;
  fib();
  printf("%d",ret);
}
