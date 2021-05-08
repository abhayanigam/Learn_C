#include <stdio.h>

int main() {
  printf("File : %s\n", __FILE__); // current filename
  printf("Date : %s\n", __DATE__); // current date as character (MMM DD YYYY)
  printf("Time : %s\n", __TIME__); // current time (HH:MM:SS)
  printf("Line : %d\n", __LINE__); // current line number
  printf("ANSI : %d\n", __STDC__); // defined as 1 when the compiler complies with the ANSI standard

  return 0;
}