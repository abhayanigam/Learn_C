#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,c=0,n;
    printf("Enter the word to check palindrome :");
    gets(a);
    n=strlen(a);
    for ( i = 0; i < n/2; i++)
    {
        if (a[i]==a[n-i-1])
        {
            c++;
        }
    }
    if (c==i)
    {
        printf("Entered word is a palindrome %s",a);
    }
    else
    {
        printf("Entered word is not a palindrome %s",a);
    }
}