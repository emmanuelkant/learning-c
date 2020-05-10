#include <stdio.h>

int main() {
  char letters[] = { 'A', 'B', 'C', 'D' };
  
  printf("This is a poiter %c\n", *(letters + 1));

  return 0;
}
