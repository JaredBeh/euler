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

int sumsquare(int roof){
  int i = 1;
  int sum = 0;
  while (i <= roof){
    sum += i * i;
    i++;
  }
  return sum;
}

int squaresum(int roof){
  int i = 1;
  int sum = 0;
  while (i <= roof){
    sum += i;
    i++;
  }
  sum = sum * sum;
  return sum;
}

int sumsquarediff(int roof){
  return sumsquare(roof) - squaresum(roof);
}

int lim = 1000;

int main(){
  printf("The sum of all multiples of 3 or 5 below %d is %d\n", lim, mult3or5(lim));

  return 0;
}
