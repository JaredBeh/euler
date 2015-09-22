#include<stdio.h>

int pb1(inny){
  int d = inny;
  int c = 0;
  int tt = 0;
  while (c < d){
    if(c%5 == 0 || c % 3== 0){
      tt += c;
    }
    c++;
  }
  return tt;
}
int pb2(inny){
  int d = inny;
  int c = 1;
  int c1 = 2;
  int temp = 0;
  int tt = 0;
  while (temp <= d){
    temp = c1;
    if(temp % 2 == 0){
      tt += temp;
    }
    temp = c + c1;
    c = c1;
    c1 = temp;
  }
  return tt;
}
int main(){
  printf("Homework #1\n");
  printf("1. %d\n", pb1(1000));
  printf("2. %d\n", pb2(4000000));
  return 0;
}

