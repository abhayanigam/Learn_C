#include <stdio.h>
int main()
//Putchar
//prototype:- int putchar(int ch)
//A = 65 ASCII value to Z = 90
{
    int ch;
    for (ch='A'; ch<='Z'; ch++) {
        putchar(ch);
        printf(",");
    }
    printf("\n");
}
