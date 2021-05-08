#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main() {
  unsigned long sec;
  getSeconds(&sec);

  // print the actual value
  printf("Number of seconds: %ld\n", sec);

  return 0;
}

void getSeconds(unsigned long *par) {
  // get the current number of seconds
  *par = time(NULL);
  return;
}