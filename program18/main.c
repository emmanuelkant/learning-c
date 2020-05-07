#include <stdio.h>
#include <string.h>

int main() {

  char firstName[15];
  char lastName[10];
  char fullName[25];

  printf("Enter with your first name: ");
  fgets(firstName, 15, stdin);
  printf("Now enter with your last name: ");
  fgets(lastName, 10, stdin);

  strcpy(fullName, firstName);
  strcat(fullName, lastName);

  printf("Welcome %s", fullName);

  return 0;
}