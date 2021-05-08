#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char name[100];
  char *description;

  strcpy(name, "Imam Sutono");

  // allocate memory dynamically
  description = malloc(30 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate required memory");
  } else {
    strcpy(description, "He is student at Binus University");
  }

  printf("Name : %s\n", name);
  printf("Description : %s\n", description);
  
  // release memory using free() function
  free(description);
}