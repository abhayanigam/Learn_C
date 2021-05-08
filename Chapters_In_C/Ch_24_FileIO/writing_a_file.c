#include <stdio.h>

int main() {
  FILE *fp;

  fp = fopen("./tmp/test.txt", "w+"); // create a new file or open an existing file
  fprintf(fp, "This is testing for fprintf...\n"); // writes a string into a file
  fputs("This is testing for fputs...\n", fp); // writes the string to the output stream referenced by fp
  fclose(fp);
  
  return 0;
}