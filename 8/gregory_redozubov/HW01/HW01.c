#include<stdio.h>
#include<stdlib.h>

main(){

}

int multiplesOf3And5(){
  int i;
  int sum = 0;
  


  for(int i=0, i<1000, i=i+1){
    if(i%3==0 || i%5==0){
      sum = sum + i;
    }
  }

  return sum;
}
