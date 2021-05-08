#include <stdio.h>

int main() {
  FILE *fp;
  char buff[255];

  fp = fopen("./tmp/test.txt", "r"); // create a new file or open an existing file
  fscanf(fp, "%s", buff); // read strings from a file only until the first space character
  printf("1. %s\n", buff);

  fgets(buff, 255, (FILE*)fp); // reads up to n-1 characters from the input stream referenced by fp
  printf("2. %s\n", buff);

  fgets(buff, 255, (FILE*)fp);
  printf("3. %s\n", buff);
  fclose(fp); // close file and released any memory used for the file

  return 0;
}