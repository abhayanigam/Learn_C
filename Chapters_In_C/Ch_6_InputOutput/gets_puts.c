#include <stdio.h>

int main() {
  char str[100];

  printf("Enter a value: ");
  gets(str);

  printf("\nYou entered: ");
  puts(str);
  
  return 0;
}