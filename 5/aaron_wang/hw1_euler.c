#include <stdio.h>
#include <stdlib.h>

int mult3or5(int n){
  int i = 0;
  int output = 0;
  while (i < n) {
    if ((i%3==0) || (i%5==0)) {
	output += i;
    }
    i += 1;
  }
    return output;
}

long fib(long n){
  long a = 1;
  long b = 1;
  long c = 2;
  long output = 2;
  while ( a + b < n) {
    a = b;
    b = c;
    c = a + b;
    if (c % 2 == 0) {
      output += c;
    }
  }
  return output;
}
  

int main(){
  printf("%d\n",mult3or5(1000)); // prints 233168
  printf("%ld\n",fib(4000000)); //prints 4613732
}


