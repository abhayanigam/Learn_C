#include<stdio.h>
void odd_even(int *arr, int n)
{
    int sum_even=0,sum_odd=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]%2==0)
            sum_even=sum_even+arr[i];
        else
            sum_odd=sum_odd+arr[i];

    }
    printf("sum of even numbers = %d\n",sum_even);
    printf("sum of odd numbers = %d\n",sum_odd);
}

int main()
{
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    odd_even(arr,size);

    return 0;
}