#include <stdio.h>

int main() {

  char name[15]; //Can catch "Emmanuel" for instance but not "Emmanuel Kant"

  printf("Enter with your name: ");
  scanf("%s", &name);
  printf("Hi %s, welcome!\n", name);

  return(0);
}
