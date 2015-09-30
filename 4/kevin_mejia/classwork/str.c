#include <stdio.h>
int main() {
  char s[] = "gear";
  char *sp = s;
  //printf(sp);
  //  long *n = p;//so I don't alter p;
  int x = 0;
  while (sp[x]) {//you can remove the =!0 because it will return true 
    //unless we reach zero
    x++;//goes up by 1, will point one spot further
    }
  printf("length of gear is %d \n" ,x); 
  return 0;
}
/*
difference b/w s++ and ++s
s++ returns s then adds the one
++s adds one and then returns s
if the loop was while(sp[x++]) , you will end up with one moer than the length

by incrementing s4, you'll lose access to beginning of the string, it might be
 better to have a dummy variable to freely alter
 */

