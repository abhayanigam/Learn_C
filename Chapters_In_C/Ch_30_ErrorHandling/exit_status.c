#include <stdio.h>
#include <stdlib.h>

int main() {
  int dividend = 20;
  int divisor = 5;
  int quotient;

  if (divisor == 0) {
    fprintf(stderr, "Division by zero! Exiting...\n");
    printf("%d\n",EXIT_FAILURE);
    exit(EXIT_FAILURE); // EXIT_FAILURE defined as 1
  }

  quotient = dividend / divisor;
  fprintf(stderr, "Value of quotient : %d\n", quotient);
  
  // EXIT_SUCCESS indicate program coming out after a successfull operation
  printf("%d",EXIT_SUCCESS);
  exit(EXIT_SUCCESS);
}
