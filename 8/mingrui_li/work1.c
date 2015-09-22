#include <stdio.h>
int mult3and5(int a, int b){
  int answer = 0;
  while (a < b){
    if (a % 3 == 0 || a % 5 == 0){
      answer = answer + a;
    }
    a++;
  }
  return answer;
}
int largestprimefact(int a){
  int answer = 1;
  while (a % 2 == 0){
    answer = 2;
    a = a / 2;
  }
  int start = 3;
  while (a > 1){
    while (a % start == 0){
      answer = start;
      a = a / start;
    }
    start = start + 2;
  }
  return answer;
}
int main(){
  printf("%d\n", mult3and5(0, 1000));
  printf("%d", largestprimefact(13195));
}
