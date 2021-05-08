#include <stdio.h>

int sum(int a, int b);

// global variable declaration (outside all functions)
int a = 20;

int main() {
  // local variable declaration in main function
  int a = 10;
  int b = 20;
  int c = 0;
  
  printf("value of a in main() = %d\n", a);
  c = sum(a, b);
  printf("value of c in main() = %d\n", c);

  return 0;
}

int sum(int a, int b) {
  printf("value of c in main() = %d\n", a);
  printf("value of c in main() = %d\n", b);

  return a + b;
}