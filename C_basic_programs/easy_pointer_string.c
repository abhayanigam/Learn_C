#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    char *pa,*pb;
    printf("Enter first string :");
    fgets(a,100,stdin);
    printf("Enter next string to concatenate :");
    fgets(b,100,stdin);
    pa=a,pb=b;
    strcat(pa,pb);
    printf("concatenation of two strings using strcat is %s\n",pa);
    return 0;
}