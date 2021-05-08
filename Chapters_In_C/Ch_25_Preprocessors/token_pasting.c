#include <stdio.h>

// (##) is token pasting operator, used to combine two arguments (concat)
#define tokenpaster(n) printf("token " #n " = %d\n", token##n);

int main() {
  int token34 = 40;
  tokenpaster(34);
  
  return 0;
}