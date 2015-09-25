#include <stdio.h>
#include <stdlib.h>

int UP_TO;

int main(int args[], char **argv) {
	UP_TO = 1000;
	int i = 0;
	int sum = 0;
	for (i = 1; i < UP_TO; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum = sum + i;
		}
	}
	printf("Answer is %d\n", sum);
	return 0;
}
