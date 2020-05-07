#include <stdio.h>
#include <string.h>

int main() {

  char string[] = "Hi, my name is Emmanuel";
  int len;

  len = strlen(string);
  puts("The following string:");
  puts(string);
  printf("is %d characters long.\n", len);

  return 0;
}