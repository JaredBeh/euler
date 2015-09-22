#include <stdio.h>
#include <stdlib.h>

int multiples(){
  int x = 0;
  int total = 0;
  for (x = 0; x < 1000; x++){
    if (x % 3 == 0){
      total += x;
    }
    else if (x % 5 == 0){
      total += x;
    } 
  }
  return total;
}

int evenFib(){
  unsigned int first = 0;
  unsigned int second = 1;
  unsigned int middle = 0;
  unsigned int total = 0;
  while (first < 4000000){
  	//printf("%d\n", first);
  	if(first % 2 == 0){
  		total += first;
  	}
  	middle = first + second;
  	first = second;
  	second = middle;
  }
  return total;
}

int main(){
  printf( "The sum of all of the multiples of 5 and three is %d\n", multiples());
  printf( "The sum of all even Fibonacci numbers under 4,000,000 is %d\n", evenFib());
}

