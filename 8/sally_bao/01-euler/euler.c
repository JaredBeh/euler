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
  return abs(sumsquare(roof) - squaresum(roof));
}


int main(){
  printf("%d\n", mult3or5(1000));
  printf("%d\n", sumsquarediff(10));
  printf("%d\n", sumsquarediff(100));

  return 0;
}
