#include <stdio.h>

int sumOf(int num, int max){
  int i = max-1;
  int s = 0;
  while(i > 0){
    s += i/num * num;
    i -= num;
    //printf("%d\n",s);
  }
  return s;
}

int numFib(int position){
  int i = position;
  if(i==1){
    return 1;
  }
  else if(i==2){
    return 2;
  }
  else{
    return numFib(i-1)+numFib(i-2);
  }
}

int sumFib(int max){
  int i = 1;
  int s = 0;
  while(numFib(i)<max){
    int temp = numFib(i);
    if(temp%2==0){
      s+=temp; 
    }
    //printf("%d\n",s);
    i++;
  }
  return s;
}

int main(){
  printf( "Number 1:\nExpect 23: %d\n", sumOf(3,10)+sumOf(5,10));
  printf( "For 1000: %d\n", sumOf(3,1000)+sumOf(5,1000)-sumOf(15,1000));

  printf( "Number 2:\nSumfib of 10, expecting 44: %d\n", sumFib(90));
  printf( "Sumfib with max 4000000: %d\n", sumFib(4000000));
}
