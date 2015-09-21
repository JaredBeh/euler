# include <stdio.h>
# include <stdlib.h>
# include <math.h>

// Problem 6
int six(){
  double s1 = 0.0;
  double s2 = 0.0;
  double i = 1;
  while (i<=100){
    s1+=pow(i,2.0);
    s2+=i;
    i++;
  }
  s2*=s2;
  return s2-s1;
}

// Problem 20
int twenty(){
  
}

int sumDigits(){

}

int main(){
  printf("%d",six());
  return 0;
}
