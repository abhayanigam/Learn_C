#include <stdio.h>
#include <string.h>

// union allow to store different data types in the same memory
union Data {
  int i;
  float f;
  char str[20];
};

int main() {
  union Data data;

  data.i = 10;
  printf("data.i: %d\n", data.i);

  data.f = 220.5;
  printf("data.f: %f\n", data.f);

  strcpy(data.str, "C Programming");
  printf("data.str: %s\n", data.str);

  // i and f will corrupt because the final value assigned to the variable
  // has occupied memory location
  printf("data.i: %d\n", data.i);
  printf("data.f: %f\n", data.f);
  printf("data.str: %s\n", data.str);

  return 0;
}