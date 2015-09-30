#include <stdio.h>

//sum of all multiples of 3 and five below x
int problem1(int x){
  int i;
  int sum;
  for (i = 0; i < x; i++) {
    if ((i % 5 == 0) || (i % 3 == 0)) {
      sum += i;
    }
  }
  return sum;
}

//largest prime factor of x
int problem3(long x){
 
  while (x > 1) {
    int i;
    int guess= 1;
    for (i = 2; i <= x; i++) {
      if (x % i == 0) {
        if (i > problem3(x / i)) {
	  guess = i;
	  return guess;
	}
	else {
	  guess = problem3(x / i);
	  return guess;
	}
      }
    }
  }
}
    

int main() {
  printf("Problem 1 test: %d\n", problem1(10));
  printf("Problem 1: %d\n", problem1(1000));
  printf("Problem 3 test: %d\n", problem3(13195));
  printf("Problem 3: %d\n", problem3(600851475143));
  return 0;
}
