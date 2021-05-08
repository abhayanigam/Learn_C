//C program to display simple calculator.

#include <stdio.h>
#include <math.h>
int main()
{
  float n1, n2;
  char operator;
  printf("Enter an operator(+,-,/,*,^):");
  scanf("%c", &operator);
  printf("Enter two numbers:");
  scanf("%f%f", &n1, &n2);

  switch (operator)
  {
  case '+':
    printf("%.3f + %.3f = %.3f", n1, n2, (n1 + n2));
    break;
  case '-':
    printf("%.3f - %.3f = %.3f", n1, n2, (n1 - n2));
    break;
  case '/':
    printf("%.3f / %.3f = %.3f", n1, n2, (n1 / n2));
    break;
  case '*':
    printf("%.3f * %.3f = %.3f", n1, n2, (n1 * n2));
    break;
  case '^':
    printf("%.3f ^ %.3f = %.3f", n1, n2, pow(n1, n2));
    break;
  default:
    printf("Error! operator is wrong");
  }
  return 0;
}
