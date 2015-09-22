#include <stdio.h>
#include <stdlib.h>

/* Problem 1
   Find the sum of all the multiples of 3 or 5 below 1000.
*/

int problem1() {
  int sum = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) sum += i;
  }
  return sum;
}


/* Problem 2
   By considering the terms in the Fibonacci sequence whose values 
   do not exceed four million, find the sum of the even-valued terms.
*/

int problem2() {
  int temp = 0;
  int pNum = 0;
  int cNum = 1;
  int sum = 0;
  for (;cNum < 4000000;temp = cNum ){
    if (cNum % 2 == 0) sum += cNum;
    cNum = cNum + pNum;
    pNum = temp;
    
  }
  return sum;
}



/* Problem 6
   Find the difference between the sum of the squares of the first
   one hundred natural numbers and the square of the sum.
 */

int problem6() {
  int i = 0;
  int num1 = 0;
  for (i = 1; i < 101; i++) {
    num1 += i * i;
  }
  int num2 = 0;
  for (i = 1; i < 101; i++) {
    num2 += i;
  }
  num2 = num2 * num2;

  return num2 - num1;
  
}

int main(){
  printf("Answer to problem 1: %d\n",problem1()); 
  printf("Answer to problem 2: %d\n",problem2());
  printf("Answer to problem 6: %d\n",problem6());
}

