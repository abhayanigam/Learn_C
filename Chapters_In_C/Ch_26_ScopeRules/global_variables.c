#include <stdio.h>

// global variable declaration (outside all functions)
int g;

int main() {
  // local variable definition (inside the functions and blocked)
  int a, b;
  /*variable name for global and local can have same name
    but the value of local variable will take preference*/ 
  // int g = 10;

  // actual initialization
  a = 10;
  b = 20;
  g = a + b;

  printf("value of a = %d, b = %d, g = %d\n", a, b, g);

  return 0;
}