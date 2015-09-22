#include <stdio.h> 

int mult35(){
  int sum =0;
  int i;
  for (i=0; i<1000;i++){
    if (i%3 == 0 || i%5==0){
      sum+=i;
    }
  }
  return sum;
}

int evenFibNum(){
  int sum=0;
  int temp;
  int x=1;
  int y=2;
  while (y<=4000000){
    if (y%2==0){
      sum+=y;
    }
    temp=x+y;
    //printf("%d\n",temp);
    x=y;
    y=temp;
  }
  return sum;
}

int main(){
  printf("this be the answer #1 %d \n", mult35());
  printf("this be the answer #2 %d \n", evenFibNum());
  return 0;
}
