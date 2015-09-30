#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short result = 0;
  unsigned short three = 3;
  unsigned short five = 5;
  while (three<1000) {
    result += three;
    three += 3;
  }
  while (five<1000) {
    result += five;
    five += 5;
  }
  printf("%hu\n",result);
  return 0;
}
