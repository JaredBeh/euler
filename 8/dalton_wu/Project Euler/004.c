#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned long pal = 0;
	int i;
	for(i=100; i<1000; i++) {
		int g;
		for(g=100; g<1000; g++) {
			unsigned long num = i*g;
			unsigned long rev = 0;
			while(num > 0) {
				rev = rev * 10 + num%10;
				num /= 10;
			}
		}
	}
}
