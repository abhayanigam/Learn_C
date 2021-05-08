#include <stdio.h>

void swap(int *x, int *y);

int main() {
  int a = 100;
  int b = 200;

  printf("Before swap, value of a : %d\n", a);
  printf("Before swap, value of b : %d\n", b);

  /* calling a function to swap the values
    &a indicates pointer to a ie. address of variable a and
    &b indicates pointer to b ie. address of variable b
  */
  swap(&a, &b);

  printf("After swap, value of a : %d\n", a);
  printf("After swap, value of b : %d\n", b);

  return 0;
}

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  return;
}