#include <stdio.h>
#include <string.h>

int main() {

  char first[] = "Well, now we are safe ";
  char second[] = "wait, what that thing!?\n";
  char buffer[64];

  strcpy(buffer, first);
  strcat(buffer, second);
  puts(buffer);

  return 0;
}