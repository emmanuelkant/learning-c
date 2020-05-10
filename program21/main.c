#include <stdio.h>

int main() {

  int pokey;
  int *p;

  p = &pokey;

  printf("this it is what has inside a variable %p\n", &pokey);
  printf("this it is what has inside a variable %p\n", p);

  return(0);
}
