#include<stdio.h>
#include<stdlib.h>

int main(){
  //Problem 2
  long x=1;
  long prev=1;
  long ans = 0;
  while(x<4000000){
    if(x%2 == 0){
      ans+=x;
    }
    x+=prev;
  }
  printf("Problem 2: %ld", ans);
}
