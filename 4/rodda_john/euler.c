/*Note, number 4 does not work, there is an issue with my is Palindrome function...*/

#include <stdio.h>
#include <math.h>

/*Helper Functions*/

int isPrime(int x) {
  for (int i = 2; i < sqrt(x); i++) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}

int numDigits(int n) {
  int i = 0;
  while(n > 0) {
    n = n / 10;
    i++;
  }
  return i;
}

int isPalindrome(int x) {
  if (x > 0) {
    if (x % 10 == 0) {
      return isPalindrome(x % 10);
    }
    else if (x % 10 == (x % (10 * numDigits(x)))) {
      return isPalindrome(x - (10 * numDigits(x)) - (x % 10));
    }
    else {
      return 0;
    }
  }
  return 1;
}

/*Problems*/

long eulerOne() {
  long solution = 0.0;
  for (int i = 2; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      solution += i;
    }
  }
  return solution;
}

long eulerTwo() {
  int a = 1;
  int b = 2;
  long solution = 0.0;
  while (b < 4000000) {
    if (b % 2 == 0) {
      solution += b;
    }
    int temp = b;
    b = a + temp;
    a = temp;
  }
  return solution;
}

int eulerThree() {
  int largestPrimeFactor = 1;
  for (int i = 2; i < sqrt(600851475143); i++) {
    if (600851475143 % i == 0 && isPrime(i) == 1) {
      largestPrimeFactor = i;
    }
  }

  return largestPrimeFactor;
}

long eulerFour() {
  long largestPalindrome = 0.0;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      if (isPalindrome(i * j) && i * j > largestPalindrome) {
	largestPalindrome = i*j;
      }
    }
  }
  return largestPalindrome;
}

/*Main function*/

int main() {
  printf("Euler Problem 1: %ld\n", eulerOne());
  printf("Euler Problem 2: %ld\n", eulerTwo());
  printf("Euler Problem 3: %i\n", eulerThree());
  printf("Euler Problem 4: %ld -- THIS IS WRONG, will fix\n", eulerFour());
  return 0;
}

