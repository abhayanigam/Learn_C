#include <stdio.h>

int main() {
  int i = 17;
  char c = 'c'; // ASCII value is 99
  int sum;

  sum = i + c; // convert 'c' to ASCII value then performing addition operation
  printf("Value of sum: %d\n", sum);
  
  return 0;
}