//To check the n no. is a prime no. or not
#include <stdio.h>
int main()
{
    int i,p=0,n;
    printf("Enter the no. to check the prime no.:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        if (n%i == 0)
        {
            p++;
        }
    }
    if (p==2) {
        printf("the no is the prime no.:%d\n",n);
    }
    else{
        printf("the no. is not a prime no. :%d\n",n);
    }
    return 0;
}