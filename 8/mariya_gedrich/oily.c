#include <stdio.h>
#include <stdlib.h>

//PROBLEM 4
int isPalin(int n) {
  int orig=n;
  int rev=0;
  while (orig!=0) {
    rev=rev*10;
    rev+=orig%10;
    orig=orig/10;
  }
  if (n==rev) {
    return 1;
  } else {
    return 0;
  }
}
  
int sarahPalin() {
  int i,j,mi,mj;
  int max;
  for (i=100;i<1000;i++) {
    for (j=100;j<1000;j++) {
      if (1==isPalin(i*j)) {
	if (i*j>max) {
	  mi=i;
	  mj=j;
	  max=i*j;
	}
      }
    }
  }
  printf("%d*%d=%d\n",mi,mj,max);
  return max;
}

//PROBLEM 9
int isPrime(int n) {
  int i;
  for (i=2; i<=(n/2); i++) {
    if (n%i==0) {
      return 0;
    }
  }
  return 1;
}

double sumPrime() {
  int i;
  double r=2;
  for (i=3;i<2000000;i++) {
    if (isPrime(i)==1) {
      r=r+(double)i;
    }
  }
  printf("result: %lf\n",r);
  return r;
}


int main() {
  sarahPalin();
  sumPrime();
}
