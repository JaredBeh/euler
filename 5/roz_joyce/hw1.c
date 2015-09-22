#include <stdio.h>
#include <stdlib.h>

int top1 = 1000;
int top2 = 200000;

//problem 1 sum of multiples of three and five

int isDivis(int n, int d){
  if(n % d == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int function1(int top){
  int curnum;
  int s = 0;
  for(curnum = 1; curnum < top; curnum++){
    if(isDivis(curnum, 3)){
      s += curnum;
    }
    else if(isDivis(curnum, 5)){
      s += curnum;
    }
  }
  return s;
}

//problem 10 summation of primes       
   
int isPrime(int n){
  int i;
  for(i = n - 1; i > 1; i--){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int function2(int top){
  int i;
  int s = 2;
  for(i = 3; i < top; i+=2){
    if(isPrime(i)){
      s += i;
    }
  }
  return s;
}

int main(){
  function1(top1);
  printf("3*5 multiples: %d \n", function1(top1));
  printf("sum primes: %d \n", function2(top2));
  return 0;
}
