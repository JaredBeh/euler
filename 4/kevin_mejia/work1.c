#include <stdio.h>
//Problem 1 multiples of 3 and 5
int sum3o5() {
  int sum =0;
  int n =1;
  while (n<1000) {
    if ((n%3 ==0) || (n%5==0)) {
      sum = sum + n;
    }
    n = n + 1 ;
  }
  return sum;
}
int eFib(){
  long a = 1 ;
  long b = 2;
  long c = 0;//largest in the fib sequence
  long sum = 0;
  while (c < 4000000) {
    if (c%2 == 0) {
      sum = sum + c; }
    c = a + b;
    a = b ;
    b = c;
  }
  
  return sum + 2;
}
int SSdiff() {
  int ssq = 0;//sum of squares
  int sqs = 0;//square of sum
  int n = 0;
  while (n <= 100) { 
    ssq = ssq + (n * n);
    sqs = sqs + n;
    n++;
  }
  return ssq - (sqs * sqs) ;
}

int main() {
  printf("sum3o5() is %d \n", sum3o5());
    printf("eFib() is %d \n", eFib());
printf("SSdiff() is %d \n", SSdiff());
}
