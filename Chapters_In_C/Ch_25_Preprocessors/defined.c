#include <stdio.h>

// defined operator is used in constant expressions to determine if an identifier is defined using #define
#if !defined (MESSAGE)
  #define MESSAGE "You wish!"
#endif

int main() {
  printf("Here is the message: %s\n", MESSAGE);
  
  return 0;
}