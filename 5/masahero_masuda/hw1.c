#include <stdio.h>
#include <stdlib.h>

//Problem 1

int start = 0;
int sum = 0;
long ans1 = 0;
long ans6 = 0;

int findsum3(n){
  start = 3;
  while( start < n ){
    sum += start;
    start += 3;
  }
  return sum;
}

int findsum5(n){
  start = 5;
  while ( start < n){
    sum += start;
    start += 5;
  }
  return sum;
}

int findrepeats(n){
  start = 15;
  while ( start < n ){
    sum += start;
    start += 15;
  }
  return sum;
}

//Problem 6

int sqsum = 0;
int sumsq = 0;

int findsqsum(n){
   start = 1;
   while ( start <= n){
     sqsum += start^2;
     start++;
   }
   return sqsum;
}

int findsumsq(n){
   start = 1;
   while (start <= n ){
     sumsq += start;
     start++;
   }
   return sumsq^2;
}

 main(){
   ans1 = findsum3(1000) + findsum5(1000) - findrepeats(1000);
   printf("ans1 is %ld",ans1 );

   ans6 = findsumsq(10) - findsqsum(10);
   printf("ans6 is %ld",ans6 );
   
}
