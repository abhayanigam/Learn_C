#include <stdio.h>

const int MAX = 4;

int main() {
  char *names[] = {
    "Imam Sutono",
    "M. Wildan Wari",
    "Saifuddin Mutammam",
    "Arif Ragil P.",
    "M. Dayu Anwar"
  };
  int i;

  for (i = 0; i < MAX; i++) {
    printf("Value of names[%d] = %s\n", i, names[i]);
  }

  return 0;
}