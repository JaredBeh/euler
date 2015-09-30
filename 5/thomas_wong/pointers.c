#include <stdlib.h>
#include <stdio.h>

int len(char *s) {
  char *i = s;
  int length = 0;
  while (*i++) { //returns i and adds 1 to it
    length++;
  }
  return length;
}

int main() {
  /* int a = 1;
  double b = 2;
  char c = 3;
  int *pa = &a;
  double *pb = &b;
  char *pc = &c;
  printf("a = %d\n", a);
  printf("b = %lf\n", b);
  printf("c = %c\n\n", c);

  printf("pa = %p\n", pa);
  printf("pb = %p\n", pb);
  printf("pc = %p\n\n", pc);
  
  pa += 1;
  pb += 1;
  pc += 1;
  printf("pa = %p\n", pa);
  printf("pb = %p\n", pb);
  printf("pc = %p\n\n", pc);
  

  printf("*pa = %d\n", *pa);
  printf("*pb = %lf\n", *pb);
  printf("*pc = %c\n", *pc);
  */
  /*
  int ray[5];
  int *rp = ray;
  ray[0] = 3;
  ray[2] = 5;
  printf("ray = %p\n", ray);
  printf("rp = %p\n\n", rp);
  printf("*ray = %d\n", *ray);
  printf("*rp = %d\n\n", *rp);
  printf("&ray = %p\n", &ray);
  printf("&rp = %p\n\n", &rp);
  printf("ray + 2 = %p\n", ray + 2);
  printf("*(ray + 2) = %d\n", *(ray + 2));
  printf("ray[2] = %d\n", ray[2]);
  printf("2[ray] = %d\n", 2[ray]);
  */
  char s[] = "This is a string with 36 characters.";

  printf("\"%s\" is a string with %d characters.\n", s, len(s));

  return 0;
}
