#include <stdio.h>
#include <stdlib.h>


int sumMultiples(int x){
	int c = 1;
	int sum = 0;
	for ( int c ; c <= x; c++){
		if (c % 3 == 0 || c % 5 == 0){
			sum += c;
		}
	}
	return sum;

}

int main(){

	int x = sumMultiples(1000);
	printf("%d\n", x);
	return 0;

}
