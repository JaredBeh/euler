#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("%d\n",problem1());
  printf("%d\n",problem2());
}

int problem1(){
 int s=0;
  int i;
  
  for(i=0;i<1000;i++){
    if(i%3==0 || i%5==0){
      s+=i;
    }
  }
  return s;
  //233168
}

int problem2(){
  int s=0;
  int i;
  for(i=2;i<4000000;i=i+3){
    s+=fib(i);
  }
  return s;
}

int fib(int n){
  int i;
  int num;
  int prev1=1;
  int prev2=0;
  for(i=1;i<n+1;i++){
    num = prev1+prev2;
    prev2 = prev1;
    prev1 = num;
  }
  return num;
}
