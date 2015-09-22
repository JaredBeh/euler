#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned long num = 600851475143;
	unsigned long factor = 1;
	unsigned long i = 1;
	
	while(i++<num) {
		if(num%i==0) {
			num /= i;
			factor = i;
		}
	}
	printf("%lu\n", factor);
	return 0;
}
