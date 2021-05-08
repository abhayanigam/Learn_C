#include <stdio.h>

// function declaration
int max(int num1, int num2);

int main() {
  int a = 100;
  int b = 200;
  int ret;

  ret = max(a, b);

  printf("Max value is : %d\n", ret);

  return 0;
}

// function returning the max between two numbers
int max(int num1, int num2) {
  int result;

  if (num1 > num2) 
    result = num1;
  else
    result = num2;

  return result;
}