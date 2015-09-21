#include <stdio.h>

int main() {
  int i = 1, j = 2, max = 4000000;
  int sum = 0;
  while (i < max && j < max) {
    /* use the temp vars */
    if (i % 2 == 0) {
      sum += i;
    }
    if (j % 2 == 0) {
      sum += j;
    }
    /* get the next two numbers */
    i += j;
    j += i; /* i + j */
  }
  printf("%d\n", sum);
  return sum;
}
