#include <stdio.h>
#include <math.h>

int main() {

  float a, b, result;

  printf("Enter with first value: ");
  scanf("%f", &a);
  printf("Enter with second value: ");
  scanf("%f", &b);
  printf("=========== RESULT ===========\n");
  printf("%f + %f = %f\n", a, b, a + b);
  printf("%f - %f = %f\n", a, b, a - b);
  printf("%f * %f = %f\n", a, b, a * b);
  printf("%f / %f = %f\n", a, b, a / b);
  printf("%f / %f = %f\n", b, a, b / a);
  printf("%f to the %fth power is %f\n", a, b, pow(a, b));
  printf("The square root of %f is %f\n", a, sqrt(a));
  printf("The square root of %f is %f\n", b, sqrt(b));


  return(0);
}