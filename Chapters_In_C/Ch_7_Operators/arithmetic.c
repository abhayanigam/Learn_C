#include <stdio.h>

int main() {
  int A = 10;
  int B = 20;

  int add = A + B;
  printf("A + B = %d\n", add);

  int substract = A - B;
  printf("A - B = %d\n", substract);

  int multiplies = A * B;
  printf("A x B = %d\n", multiplies);

  int divide = A / B;
  printf("A / B = %d\n", divide);

  int modulus = A % B;
  printf("A modulus B = %d\n", modulus);

  int increment = A++;
  printf("A increment = %d\n", increment);

  int decrement = A--;
  printf("A decrement = %d\n", decrement);
}