#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)

int main() {
  printf("Max between 20 and 10 is %d\n", MAX(10, 20));
  
  return 0;
}