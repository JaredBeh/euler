
/*
  A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.
  
  Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int isPalindrome(long n){
  long orig = n;
  long ret = 0;
  for (n=n;n>0;n=n/10){
    ret = 10*ret + n%10;
  }
  //printf("ret=%lu\n",ret);
  //printf("n=%lu\n",n);
  return ret==orig;
}

int main(){

  long a = 100;
  long b = 100;
  long max = 0;

  for (a=a;a<999;a++){
    for(b=100;b<999;b++){
      if (isPalindrome(a*b) && a*b>max){
	max = a*b;
      }
    }
  }

  //printf("%d\n", isPalindrome(10101));
  printf("answer=%lu \n",max);

  return 0;
}
