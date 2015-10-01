#include <stdlib.h>
#include <stdio.h>

int prob1(){
  int n,ans;
  n=3;
  ans=0;
  while(n<1000){
    ans+=n;
    if(!(n%5)){
      ans-=n;
    }
    n+=3;
  }
  n=5;
  while(n<1000){
    ans+=n;
    n+=5;
  }
  return ans;
}
int prob2(){
  int fib[400000];
  fib[0]=1;
  fib[1]=2;
  int ans,n;
  ans=2;
  n=2;
  while((fib[n]=fib[n-1]+fib[n-2])<4000000){
    ans+=fib[n]*-1*((fib[n]%2)-1);
    n++;
  }
  return ans;
}
int main(){
  printf("3and5 %d\nevenfib %d\n",prob1(),prob2());
  return 0;
}
