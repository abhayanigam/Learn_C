#include <stdio.h>

int main() {
  int i, j;

  for (i = 2; i < 30; i++) {
    for (j = 2; j <= (i/j); j++) 
    if (!(i%j)) break;
    if (j > (i/j)) printf("%d is prime\n", i);
  }

  return 0;
}