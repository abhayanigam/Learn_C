//C program to divide two numbers.

#include <stdio.h>
int main()
{
  float n1, n2, div;
  printf("Enter two numbers:");
  scanf("%f%f", &n1, &n2);
  div = n1 / n2;
  printf("Division of two numbers=%.3f", div);
}
