#include <stdio.h>

int main() {
  int i = 17;
  char c = 'c'; // ascii value is 99
  float sum;

  sum = i + c; 
  /* c will be converted to int, but has a final value double 
   * then i and c will convert to float
  */
  printf("Value of sum : %f\n", sum);
  
  return 0;
}