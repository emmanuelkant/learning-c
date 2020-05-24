#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main() {

  char *name = malloc(sizeof(char) * SIZE);

  if (name == NULL) {
    puts("Erro when trying to allocate memory");
    return 1;
  }

  printf("Enter with your name: ");

  fgets(name, SIZE, stdin);

  printf("Hello World, %s\n", name);




  return 0;
}
