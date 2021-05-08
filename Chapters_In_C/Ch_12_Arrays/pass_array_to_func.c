#include <stdio.h>

double getAverage(int arr[], int size);

int main() {
  // an int array with 5 elements
  int balance[5] = { 1000, 2, 3, 17, 50 };
  double avg;

  // pass pointer to the array as an argument
  avg = getAverage(balance, 5);

  // output the return value
  printf("Average value is: %f\n", avg);

  return 0;
}

double getAverage(int arr[], int size) {
  int i;
  double avg;
  double sum = 0;

  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }

  avg = sum / size;
  return avg;
}