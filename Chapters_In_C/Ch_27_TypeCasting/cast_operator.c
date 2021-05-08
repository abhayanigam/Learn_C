#include <stdio.h>

int main() {
  int sum = 17, count = 5;
  double mean;

  mean = (double) sum / count; // convert data type of sum (int) to double
  printf("Value of sum : %f\n", mean);
  
  return 0;
}