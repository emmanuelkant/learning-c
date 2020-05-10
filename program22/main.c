#include <stdio.h>

int main() {

  char a, b, c, *p;

  a = 'A';
  p = &a;
  b = *p;
  p = &c;
  *p = 'Z';

  printf("Variable 'a' has %c value.\n", a);
  printf("Variable 'b' has %c value.\n", b);
  printf("Variable 'c' has %c value.\n", c);

  return 0;
}