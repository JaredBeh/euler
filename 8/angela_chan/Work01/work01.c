#include <stdio.h>

int summult35(){
  int result = 0;
  int count = 1;
  while (count<1000){
    if (count%3==0||count%5==0){
      result+=count;
    } count++;
  } printf("%d\n", result);
  return 0;
}



int main(){
  summult35();
}
