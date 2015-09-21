#include <stdio.h>

//We don't need to add anything for this problem.  Take the fibonacci two larger than our largest even one, subtract 1, and divide by 2.

main(){
  int n = 4000000;
  printf("%d\n", (fibonacci_two_after_largest_even_fibonacci_less_than_n(n)-1)/2);
}

fibonacci_two_after_largest_even_fibonacci_less_than_n(int n){
  int a=1;
  int b=1; //the first two fibonacci's are 1,1 master race
  while(b<=n || b%2==1){
    b=a+b;
    a=b-a;
  }
  return a;
}
