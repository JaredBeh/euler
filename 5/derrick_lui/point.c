#include <stdio.h>
#include <stdlib.h>

int main(){
  int fred=86;
  double d;
  char c;
  int *pfred = &fred;
  double *pd = &d;
  char *pc = &c;

  printf("pointer size= %lu\n",(sizeof (int *)));
  printf("pfred = %lu\n", pfred);
  printf("pc = %lu\n", pc);
  printf("pd = %lu\n", pd);

  return 0;

}

  
