#include <stdio.h>

int mult3and5(n) {
  int i;
  int sum = 0;
  for (i=1; i<n; i++) {
    if (i%3 == 0 || i%5==0) {
      sum += i;
    }
  }
  return sum;
}


int divisible(n,x) {
  int i;
  for (i=1; i <= x; i++) {
    if (n%i != 0) {
      return 0; //FALSE                                                         
    }
  }
  return 1;//TRUE                                                               
}

int smallestMultiple(x) { // x= highest div 
  int cur = 1;
  int i=1;
  int done = 0;
  while (!done) {
    if (cur < x) {
      cur ++;
    }
    else {
      if (divisible(cur,x) == 1) {
	done =1;
      }
      else {
	cur ++;
      }
    }
  }
  return cur;
}


int main() {
  printf("smallest multiple divisble from 1-10:%d (expecting 2520)\n",smallestMultiple(10));
  printf("smallest multiple divisible from 1-20:%d \n", smallestMultiple(20));
  printf("sum of all multiples of 3 and 5 below 10:%d (expecting 23)\n", mult3and5(10));
  printf("sum of all multiples of 3 and 5 below 1000:%d\n", mult3and5(1000));
}
