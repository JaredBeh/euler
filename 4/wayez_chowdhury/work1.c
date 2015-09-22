#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("%d\n", prob1());
  printf("%d\n", prob2());
  printf("%d\n", prob3());
  return 0;

}

int prob1(){
  int x;
  int ans = 0;
  for (x = 0; x < 1000; x++){
    if (x % 3 == 0 || x % 5 == 0){
      ans += x;
    }
  }
  return ans;
}

int prob2(){
  int ans = 0;
  int x = 1;
  int y = 2;
  int count = 0;
  while (x < 4000000 && y < 4000000){
    if (count == 0){
      if (y % 2 == 0){
        ans += y;
      }
      x = x + y;
      count = 1;
    }
    else {
      if (x % 2 == 0){
        ans += x;
      }
      y = y + x;
      count = 0;
    }
  }
  return ans;
}

/*int prob3(){
  int ans = 1;
  int x;
  for (x = 1; x < 600851475143; x++){
    if (isPrime(x) && x > ans){
      ans = x;
    }
  }
  return x;
}
*/
