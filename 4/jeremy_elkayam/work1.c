#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("%d\n",prob6());
  printf("%d\n",prob2());
  return 0;
}
int prob6(){
  int z;
  int sumsq=0;
  int sqsum=0;
  for(z=1;z<=100;z++){
    sumsq+=z*z;
    sqsum+=z;
  }
  sqsum*=sqsum;
  return sqsum-sumsq;
}
int prob2(){
  return 0;
}
int fib(int dex){
  if(dex==1 || dex==2){
    return 1;
  }
  return fib(dex-1)+fib(dex-2);
}
