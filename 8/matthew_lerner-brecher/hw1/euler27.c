#include <stdio.h>
#include <stdlib.h>

int isprime(int n) {
	if (n <= 1) {
		return 0;
	}
	int i = 2;
	while (i*i <= n) {
		i++;
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int a;
	int b;
	int top = 0;
	int bestProd;
	int temp;
	for (a = -1000; a <= 1000; a++) {
		for (b = 1; b <= 1000; b++) {
			temp = 0;
			while (isprime(temp*temp+a*temp+b)) {
				temp++;
			}
			if (temp > top) {
				top = temp;
				bestProd = a*b;
			}
		}
	}
	printf("%d\n",bestProd);
	return 0;
}
