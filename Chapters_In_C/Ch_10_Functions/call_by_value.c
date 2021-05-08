#include <stdio.h>

void swap(int av, int ay);

int main() {
  int a = 100;
  int b = 200;

  printf("Before swap, value of a : %d\n", a);
  printf("Before swap, value of b : %d\n", b);

  swap(a, b);
  
  printf("After swap, value of a : %d\n", a);
  printf("After swap, value of b : %d\n", b);

  return 0;
}

void swap(int x, int y) {
  int temp;

  // changing parameter within function have no effect for argument
  temp = x; // save the value of x
  x = y; // put y into x
  y = temp;

  return;
}