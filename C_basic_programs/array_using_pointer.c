#include <stdio.h>

int main()
{
    int size,i,*p;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];
    p = arr;
    for ( i = 0; i < size; i++)
    {
        printf("Enter the element No. %d :",i+1);
        scanf("%d",&p[i]);
    }
    printf("\n");
    printf("Entered Array is .\n");
    for ( i = 0; i < size; i++)
    {
        printf("element No. %d :%d\n",i+1,*p);
        p++;
    }
    return 0;
}