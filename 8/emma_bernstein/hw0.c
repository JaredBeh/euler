#include <stdio.h>

int prob1( int upTo ) { 
  int cur = 0;
  int sum = 0;
  while(cur < upTo) {
    if (cur % 3 == 0 || cur % 5 == 0) 
      sum += cur;
    cur++;
  }
  return sum;
} 

int prob2( int upTo ) {
	int sum = 0;
	int temp = 0;
	int lastFib = 1;
	int thisFib = 2;
	while (thisFib < upTo) { 
		if (thisFib % 2 == 0) {
			sum += thisFib;
		}
		temp = lastFib;
		lastFib = thisFib;
		thisFib = lastFib + temp;
	}
	return sum; 
}

int main() {
  printf( "Number 1: %d\n", prob1(1000) );
  printf( "Number 2: %d\n", prob2(4000000));
  return 0;
}
