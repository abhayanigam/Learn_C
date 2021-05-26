// Factorial for larger Value in C

#include<stdio.h>
int main()
{
    int n,counter = 0;

    printf("Enter the number to Find Factorial: ");
    scanf("%d",&n);
    int a[n*2];

    a[0]=1;
    for(; n>=2; n--)
    {
        int temp=0;
        for(int i=0; i<=counter; i++)
        {
            // printf("%d i : %d\n",i+1,i);
            // printf("\n");
            // printf("arr[i] : %d\n",a[i]);

            temp=(a[i]*n)+temp;
            a[i]=temp%10;
            temp=temp/10;
        }

        while(temp>0)
        {
            a[++counter]=temp%10;
            temp=temp/10;
        }

    }

    for(int i=counter; i>=0; i--)
        printf("%d",a[i]);

    return 0;
}