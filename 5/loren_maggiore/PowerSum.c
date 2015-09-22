//objective: 
//2 ^ some power
//then sum those digits 
#include <math.h>
#include <stdio.h>


long sumDigits (long number ){
	long sum = 0;
	while (number > 10){
		sum += number % 10;
		number = number / 10;
	}
	sum += number;
	

	return sum;
}

int main(){
	int power = 15;
	long number = pow(2, power);
	long sums = sumDigits(number);
	printf("The 2^%d is %ld. The sum of these digits is %ld\n", power, number, sums);

}