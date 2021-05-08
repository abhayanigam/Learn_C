#include <stdio.h>

int main() {
  int a = 19;
  int b = 7;
  int c = 19;

  if (a == c) {
    printf("a is equal to c\n");
  }
  
  if (a != b) {
    printf("a is not equal to b\n");
  }

  if (b < a) {
    printf("b is less than a\n");
  }

  if (a > b) {
    printf("a is greater than b\n");
  }

  if (b <= a) {
    printf("b is either less than or equal to a\n");
  }

  if (a >= b) {
    printf("a is either greater than b\n");
  }
}