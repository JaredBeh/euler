#include <stdio.h>
#include <stdlib.h>
int main(){
  int i;
  double d;
  char c;
  int *Pint = &i;
  double *Pdouble = &d;
  char *Pchar = &c;
  printf("Pint = %lu\n" , Pint);
  printf("Pdouble = %lu\n" , Pdouble);
  printf("Pchar = %lu\n" , Pchar);

  Pint +=1;
  Pdouble+=1;
  Pchar +=1;
  printf("new values after pointer has +1 added\n");
  printf("Pint = %lu\n" , Pint);
  printf("Pdouble = %lu\n" , Pdouble);
  printf("Pchar = %lu\n" , Pchar);

  //  printf("*Pint = %d\n",*Pint);
  int ray[5];
  int *rp = ray;
  printf("ray = %p\n", ray);
  printf("rp = %p\n", rp);

  //rp[2] <==> *rp + 2)
  //*2(2+rp <==> 2[rp]
  //doesn't make any sense dont do it

  return 0;
}
