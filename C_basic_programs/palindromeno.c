//Palindrome of the number.
#include <stdio.h>
int main()
{
    int rev=0,rmndr,t,n;
    printf("Enter the no :");
    scanf("%d",&n);
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    printf("the reverse of this no. is %d\n",rev);
    if (t==rev)
    {
        printf("the no. is palindrome %d\n",t);
    }
    else
    {
        printf("the no. is not a palindrome %d\n",t);
    }
}
