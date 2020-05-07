#include <stdio.h>
#include <ctype.h>

int main() {

  int c;

  do {

    c = getchar();
    c = toupper(c);
    printf("%c", c);

  } while(c != '\n');

  return 0;
}