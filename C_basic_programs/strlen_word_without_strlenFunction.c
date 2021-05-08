#include <stdio.h>
void stringlen(char word[]  /* or (char *word) */){
    int count = 0;
    while(*word != '\0'){
        count++;
        word++;
    }
    printf("The size : %d\n",count);
}
int main()
{
    char word[50];
    printf("Enter the string value :");
    fgets(word,50, stdin);
    stringlen(word);
}
