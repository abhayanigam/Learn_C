#include <stdio.h>

int main() {
  int a = 100;

  // check the boolean condition
  if (a < 20) {
    // if condition is true
    printf("a is less than 20\n");
  } else {
    // if condition is false
    printf("a is not less than 20\n");
  }

  printf("value of a is %d\n", a);

  return 0;
}