//to check the nth no. of prime no. in the series.
#include <stdio.h>
int main()
{
    int i,n,p;
    printf("Enter the size of the array:");
    scanf("%d",&p);  //for direct search don't write these two line
    for (n=0; n<=p; n++) {  //simpily write the no. in the place of p
        for (i=2; i<n; i++) {
            if (n%i==0) {
                break;
            }
        }
        if (i==n) {
            printf("the no is the prime no.:%d\n",n);
        }
    }
    return 0;
}