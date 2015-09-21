#include <stdio.h>

int summults(){
  int i = 0;
  int result = 0;
  while (i < 1000){
    if ((i % 3 == 0) || (i % 5 == 0)){
      result = result + i;
    }
    i = i + 1;
  }
  return result;
}

int evfib(){
  int now = 1;
  int prev = 1;
  int temp = 1;
  int result = 0;
  while (now < 4000000){
    if (now % 2 == 0){
      result = result + now;
    }
    temp = now;
    now = now + prev;
    prev = temp;
  }
  return result;
}

int sumsquare(){
  int i = 1;
  int sumsq = 0;
  int sqsum = 0;
  int result = 0;
  while (i < 101){
    sumsq = sumsq + (i * i);
    sqsum = sqsum + 1;
    i = i + 1;
  }
  sqsum = sqsum + sqsum;
  result = sqsum - sumsq;
  return result;
}

int main(){
  printf("%d\n", summults());
  printf("%d\n", sumsquare());
  printf("%d\n", evfib());
}
