/*Multiples of 3 and 5*/

#include <stdio.h>

int multiples(){
int i = 0;
int j=0;
int k=0;
int numMultiples;
int currIndex=0;
int sum;

for (i; i<1000; i++){
		if ((i%3 == 0) || (i%5==0)){
			numMultiples++;
		}
	}

int multiples[numMultiples];

	for (j; j<numMultiples; j++){
		if ((j%3 == 0) || (j%5==0)){
			multiples[currIndex] = j;
			currIndex++;
		}
	}

	for (k; k< numMultiples; k++){
		sum+=multiples[i];
	}

return sum;
}

int main(){
	multiples();
}

/*largest palindrome*/
 int palindrome(){
 	int i = 100;
 	int j = 100;
 	int largestNum=0;
 	int largestPalindrome=0;
 	for (i; i<=999; i++){
 		for (j; j<=999; j++){
 			if ((i*j) > largestNum){
 				largestNum = i*j;
 				if(largestNum.toString() == largestNum.toString().split("").reverse().join("");)
 					largestPalindrome = largestNum;
 			}

 		}
 	}
 	return largestPalindrome;
 }

 int main(){
 	palindrome();
 }


























