#include <stdio.h>

int letters(digit){ 
  //numbers under 20 not digits but i dont want to rename it now
  if( digit == 1 || digit == 2 || digit == 6 || digit == 10)
    return 3;
  if( digit == 4 || digit == 5 || digit == 9)
    return 4;
  if( digit == 3 || digit == 7 || digit == 8)
    return 5;
  if( digit == 11 || digit == 12)
    return 6;
  if( digit == 15 || digit == 16)
    return 7;
  if( digit == 13 || digit == 14 || digit == 19)
    return 8;
  if( digit == 17 || digit == 18)
    return 9;
  if( digit == 0)
    return 0;
  else{
    return 0;
  }
}
int lettersTens(num){
  if( num == 0)
    return 0;
  if( num == 4 || num == 5 || num == 6)
    return 5;
  if( num == 2 || num == 3 || num == 8 || num == 9)
    return 6;
  if( num == 7)
    return 8;
  else{
    return 0;
  }
}

int main(){
  int sum, i, j, k;
  for( i = 0; i < 20; i++)
    sum += letters(i);

  for( j= 20; j < 100; j++){
    int ones = j % 10;
    sum += letters(ones) + lettersTens( j/10);
  }
  for( k = 100; k < 1000; k++){
    int ones = k % 10;
    int tens = (k/10)%10;
    if( tens == 1){
      sum += letters(k % 100) + letters(k / 100);
    }
    else{
      sum += letters(ones) + lettersTens(tens) + 10 + letters(k / 100);
    //10 for hundred and
    }  
  }
  sum -= 30; //for nums without and
  sum += 11 //for one thousand
  printf("%i \n", sum);
  return sum;
}
