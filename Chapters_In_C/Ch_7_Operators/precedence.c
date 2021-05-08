#include <stdio.h>

int main() {
  int a = 20;
  int b = 10;
  int c = 15;
  int d = 5;
  int e;

  e = (a + b) * c / d; // (30 * 15) / 5
  printf("value of (a + b) * c / d is %d\n", e);

  e = ((a + b) * c) / d; // (30 * 15) / 5
  printf("value of ((a + b) * c / d) is %d\n", e);

  e = (a + b) * (c / d); // 30 * (15 / 5)
  printf("value of ((a + b) * c / d) is %d\n", e);

  e = a + (b * c) / d; // 20 + (150 / 5)
  printf("value of a + (b * c) / d is %d\n", e);

  return 0;
}