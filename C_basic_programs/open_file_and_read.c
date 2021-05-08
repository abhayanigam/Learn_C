#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    FILE *fp1; 
  
    char filename[100], c; 
  
    printf("Enter the filename to open :"); 
    scanf("%s", filename); 
    fp1 = fopen(filename, "r"); 
    if (fp1 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp1); 
    } 
    fclose(fp1); 
    return 0; 
}