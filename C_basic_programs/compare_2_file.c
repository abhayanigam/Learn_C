// First make 2 files and wirte something and then save to same folder of this program. 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
  
void compareFiles(FILE *fp1, FILE *fp2) 
{
    char ch1 = getc(fp1); //It reads a single character from a given input stream and returns the corresponding integer value
    char ch2 = getc(fp2); //It reads a single character from a given input stream and returns the corresponding integer value
    int error = 0, pos = 0, line = 1; 
  
    // iterate loop till end of file 
    while (ch1 != EOF && ch2 != EOF) 
    { 
        printf(" %c \n",ch1);
        printf(" %c \n",ch2);
        pos++; 
        if (ch1 != ch2) 
        { 
            printf("after going in 2 if condition %c \n",ch1);
            printf("after going in 2 if condition %c \n",ch2);
            error++; 
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos); 
        }
       ch1 = getc(fp1); 
       ch2 = getc(fp2); 
       
    } 
    
    printf("after while condition %c \n",ch1);
    printf("after while condition %c \n",ch2);

    printf("Total Errors : %d\t", error); 
} 
  
// Driver code 
int main() 
{ 
    FILE *fp1 = fopen("file1.txt", "r"); 
    FILE *fp2 = fopen("file2.txt", "r"); 
  
    if (fp1 == NULL || fp2 == NULL) 
    { 
       printf("Error : Files not open"); 
       exit(0); 
    } 
  
    compareFiles(fp1, fp2); 
    
    // closing both file 
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
}