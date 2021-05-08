#include <stdio.h>

const int MAX = 3;

int main() {
  int var[] = {10, 100, 200};
  int i, *ptr;

  // let us have array address in pointer
  ptr = &var[MAX-1];

  for (i = MAX; i > 0; i--) {
    printf("Address of var[%d] = %x\n", i-1, ptr);
    printf("Value of var[%d] = %x\n", i-1, *ptr);

    // move to the previous location
    ptr--;
  }

  return 0;
}