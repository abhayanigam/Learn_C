#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * getRandom() {
  static int r[10];
  int i;

  srand((unsigned) time(NULL));

  for (i = 0; i < 10; i++) {
    r[i] = rand();
    printf("r[%d] = %d\n", i, r[i]);
  }

  return r;
}

int main() {
  // a pointer to an int
  int *p;
  int i;

  p = getRandom();

  for (i = 0; i < 10; i++) {
    printf("*(p + %d) : %d\n", i, *(p + i));
  }

  return 0;
}