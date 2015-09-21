#include <stdlib.h>



int main(){
  int i = 0;
  int ret = 0;
  while(i < 1000){
    if((i % 3 == 0) || (i%5 == 0))
      ret += i;
    i++;
  }
  printf("%d",ret);
  return 0;
}
