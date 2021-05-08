#include <stdio.h>

#define message_for(a, b) \
  printf(#a " and " #b ": We love you\n");

// (\) is continuation operator, used to continue a macro that is too long for a single line
// (#) is stringize operator, used to converts a macro parameter into a string

int main() {
  message_for(Imam, Sutono);
  
  return 0;
}