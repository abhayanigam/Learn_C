#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,c=0;
    char a[100];
    printf("Enter the word :");
    gets(a);
    char *pa;
    n=strlen(a);
    for ( i = 0; i <n/2; i++)
    {
        if (a[i]==a[n-i-1])
        {
           c++;
        }    
    }
    pa=a;
    if (c==i)
    {
        printf("this is a palindrome %s",pa);
    }
    else
    {
        printf("this is not an palindrome %s",pa);
    }
    return 0;
}
