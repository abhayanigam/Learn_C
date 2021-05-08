#include <stdio.h>

int main() {
  int a = 20;
  int b = 5;
  int c = 0;

  // && is AND operator
  if (a && b) {
    printf("Condition is true, because a and b is non-zero\n");
  }

  // || is OR operator
  if (a || b) {
    printf("Condition is true, because a or b is non-zero\n");
  }

  // ! is NOT operator
  if (!(a && c)) {
    printf("Condition is true, because NOT reversed the logical condition\n");
  }
}