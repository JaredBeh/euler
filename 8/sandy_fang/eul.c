#include <stdio.h>
#include <stdlib.h>

//special pythagorean triplet

int isTriplet(int a, int b, int c){
    return (a*a) + (b*b) == (c*c);
}

int specialTriplet(){
    int a, b, c;
    //much efficient (sarcasm)
    for ( a = 100; a < 1000; a++ ){
        for ( b = 100; b < 1000; b++ ){
            for ( c = 100; c < 1000; c++ ){
                if( isTriplet(a,b,c) && ((a + b + c) == 1000) ){
                    return a*b*c;
                }
            }
        }
    }
}

//factorial digit sum

long fac(long n){
  if( n == 1 )
    return 1;
  return (n*fac(n-1));
}

int sumDigits(long n){
  int size = 1;
  int sum = 0;
  long ncopy = n;
  while( ncopy/=10 ){
    size++;
  }
  ncopy = n;
  while( size-- ){
    sum += n%10;
    n /= 10;
  }
  return sum;
}
  
  
int main(){
  //printf("5! = %ld\n",fac(5));
  //printf("100! = %ld\n",fac(100));
  //printf("sumDigits 10 = %d\n",sumDigits(3628800));
  //printf("sumDigits 100 = %d\n",sumDigits(fac(100)));
  printf("so apparently 100! is too large of a number for the primitive data types\n");
  printf("%d\n",specialTriplet());
  return 0;
}

