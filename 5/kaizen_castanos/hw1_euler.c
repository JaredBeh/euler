#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  int result1;
  //Problem 1 loop
  for (i = 1;i<1000;i++){
    if(i%3 == 0){
      result1 += i;
    }else if(i%5 == 0){
      result1 += i;
    }
  }
  printf("Problem 1 = %d\n", result1);

  /*Problem 2 loop
  int a = 1;
  int b = 2;
  int c;
  int result2 = 2;
  

  int tester = 0;
  int boo = 0;
  int result3 = 2520;*/
  //Yeah...never finished this one

  //Problem 5 loop
  while(boo == 0){
    for(i = 1;i<=20;i++){
      if(result3%i == 0){
	tester++;
      }
    }
    if (tester == 20){
      boo++;
    }else{
      tester = 0;
      result3+=20;
    }
  }
  printf("Problem 5 = %d\n", result3);
      
  
  return 0;
}
