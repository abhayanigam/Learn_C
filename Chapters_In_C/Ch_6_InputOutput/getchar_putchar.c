#include <stdio.h>

int main() {
  int c;

  printf("Enter a value: ");
  c = getchar();

  printf("\nYou entered: ");
  putchar(c);
  
  return 0;
}