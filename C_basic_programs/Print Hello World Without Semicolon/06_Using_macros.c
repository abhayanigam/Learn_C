// Printing hello world without semicolon using macros.

#include <stdio.h>
#define SHOW printf("Hello World")

int main()
{
    if (SHOW){}
    
    return 0;
}