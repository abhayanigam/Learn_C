#include <stdio.h>

int count;
extern void write_extern(); // get write_extern function from extern_support

int main() {
  count = 5;
  write_extern();
}