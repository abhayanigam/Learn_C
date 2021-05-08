#include <stdio.h>

const int MAX = 3;

int main() {
  int var[] = {10, 100, 200};
  int i, *ptr;

  // let us have address of the first element in pointer
  ptr = var;
  i = 0;

  while (ptr <= &var[MAX - 1]) {
    printf("Address of var[%d] = %x\n", i, ptr);
    printf("Value of var[%d] = %d\n", i, *ptr);

    // point to the previous location
    ptr++;
    i++;
  }

  return 0;
}