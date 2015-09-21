#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  long ans = 0;
  int prev = 1;
  for(x=1;x<4000000;x+=prev){
    if(x%2==0){
      ans+=x;
    }
    prev = x;
  }
  printf("%ld",ans);
  return 0;
}
