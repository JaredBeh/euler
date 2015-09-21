//Euler problem 7
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <stdio.h>

int main(){
  printf("The 10,001 prime number is: %d\n",n_prime(10001));
  return 0;
}

//returns the nth prime number
//requires special exception to return first prime,2
int n_prime(int n){
  if (n==1){
    return 2;
  }
  int primes[n];
  primes[0]=2;
  return r(primes,1,n-1);
}

int r(int primes[],int current, int stop){
  primes[current]=primes[current-1]+1;
  int index = 0;
  while (index<current){
    if (primes[current]%primes[index]==0){
      primes[current]=primes[current]+1;
      index=(-1);
    }
    index+=1;
  }
  if (current==stop){
    return primes[current];
  }
  return r(primes,current+1,stop);
}
