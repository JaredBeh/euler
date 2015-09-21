#include <stdio.h>
#include <stdlib.h>


int sumEven(int x){
	int c1 = 2;
	int c2 = 1;
	int sum = 0;
	for ( int c1 ; c1 <= x;){
		if (c1 % 2 == 0){
			sum += c1;
		}
		int c3 = c1;
		c1 += c2;
		c2 = c3;
	}
	return sum;

}

int main(){

	int x = sumEven(4000000);
	printf("%d\n", x);
	return 0;

}
