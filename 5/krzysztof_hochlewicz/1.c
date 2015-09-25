#include <stdio.h>
#include <stdlib.h>

//Problem 1
int main(){
	int x = 0;
	int i;
	for (i = 0; i < 1000; i++){
		if (i % 3 == 0 || i % 5 == 0){
		x += i;
		}
	}
printf("Problem 1 = %d\n", x);

//Problem 2
	int a = 0;
	int b = 1;
	int c = 0;
	int sum = 0;
	while(c < 4000000){
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0){
			sum += c;
		}
	}
printf("Problem 2 = %d\n", sum);
return 0;
}







