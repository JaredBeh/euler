#include <stdio.h>
#include <stdlib.h>

int mults() {
  unsigned int curr = 0;
  unsigned int output = 0;
  while (curr < 1000) {
    if (curr % 3 == 0 || curr % 5 == 0)
      output += curr;
    curr++;
  }
  return output;
}

int evenFibs() {
  unsigned int prev = 1;
  unsigned int curr = 1;
  unsigned int output = 0;
  while (curr < 4000000) {
    if (curr%2 == 0)
      output += curr;
    unsigned int newPrev = curr;
    curr += prev;
    prev = newPrev;
  }
  return output;
}

int main() {

  printf("sum mults of 3 and 5 less than 1000 is %d\n", mults());
  printf("sum of all even fibs under 4 mil is %d\n", evenFibs());
  
}
