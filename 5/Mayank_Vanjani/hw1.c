// Sorry for sending this late, I had problems uploading to git

#include <stdio.h>
#include <stdlib.h>

int prob1() {
  int i = 0;
  int sum = 0;
  while (i < 1000) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum = sum + i;
    }
    i += 1;
  }
  printf("%d\n", sum);
  return sum;
}

int prob2() {
  int sum = 0;
  int prev = 1;
  int current = 2;
  int current2 = 2;

  while (current < 4000000) {
    if (current % 2 == 0) {
      sum += current;
    }
    current += prev;
    prev = current2;
    current2 = current;  
  }
  printf("%d\n", sum);
  return sum;
}

int main() {
  prob1();
  prob2();
} 
  
