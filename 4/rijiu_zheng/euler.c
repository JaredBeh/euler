#include <stdio.h>
#include <math.h>

int main(){
  //printf("%d\n", problem1(1000));

  //printf("%d\n", problem2(4000000));

  return 0;
}

int problem1(int n){
  int sum = 0;
  int x;
  for(x = 0;x < n;x++){
    if(x % 3 == 0 || x % 5 == 0){
      sum += x;
    }
  } 
  return sum;
}

int problem2(int n){
  int f1 = 1;
  int f2 = 1;
  int sum = 0;
  while(f1 < n){
    int old = f1;
    f1 = f2;
    f2 += old;
    if(f1 % 2 == 0){
      sum += f1;
    }
  }
  return sum;
}
