#include <stdio.h>

int mult3or5(int roof){
  int sum = 0,
    i = 0;
  while (i <= roof){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
    i++;
  }
  return sum;
}

int largestProduct(length){
  f = fopen("./number.txt", "r");
  
}


int lim = 1000;

int main(){
  printf("The sum of all multiples of 3 or 5 below %d is %d\n", lim, mult3or5(lim));
  return 0;
}
