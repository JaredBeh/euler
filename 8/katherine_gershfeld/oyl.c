# include <stdio.h>
# include <stdlib.h>
//# include <math.h>

// Problem 6
int six(){
  int s1 = 0;
  int s2 = 0;
  int i = 1;
  while (i<=100){
    s1+=i*i;
    s2+=i;
    i++;
  }
  s2*=s2;
  return s2-s1;
}

// Problem 2
int two(){
  int f1 = 1;
  int f2 = 2;
  int f = 0;
  int sum = 2;
  while (f<4000000){
    f = f1 + f2;
    if (f%2 == 0){
      sum+=f;
    }
    f1 = f2;
    f2 = f;
  }
  return sum;
}

int main(){
  printf("%d\n",six());
  printf("%d\n",two());
  return 0;
}
