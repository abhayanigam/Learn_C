#include <stdio.h>
int main()
{
    int *ptr,i,j,s;
    printf("Enter the size :");
    scanf("%d",&s);
    typedef int array;
    array list[s];
    for ( i = 0; i <s ; i++)
    {
        printf("Enter the element :");
        scanf("%d",&list[i]);
    }
    ptr = list;
    for ( i = 0; i < s; i++)
    {
        printf("Entered the values are :%d\n",ptr[i]);
    }
    for ( i = 0; i < s-1; i++)
    {
        for ( j = i+1; j < s; j++)
        {
           if (list[j]<list[i])
           {
               list[i] = list[i] - list[j];
               list[j] = list[j] + list[i];
               list[i] = list[j] - list[i];
               /*  Or using temprary variable to check.
               int temp;
               temp = list[i];
               list[i] = list[j];
               list[j] = list[i];*/
           }
        }
    }
    for ( i = 0; i < s; i++)
    {
        printf("After shorting :%d\n",ptr[i]);
    }
}