#include <stdio.h>

extern int count; // get count variable from extern_main

void write_extern(void) {
  printf("count is %d\n", count);
}