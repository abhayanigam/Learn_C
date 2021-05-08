#include<stdio.h>

#define MAX 30

void main()
{
int size,i,arr[MAX];
int *ptr;

ptr=&arr[0];

printf("Enter the size of array : ");
scanf("%d",&size);


   for(i=0;i<size;i++)
   {
    printf("Enter %d integers into array:");
   scanf("%d",ptr);
   ptr++;
   }

ptr=&arr[size-1];

printf("Elements of array in reverse order are:");

 for(i=size-1;i>=0;i--)
   {
   printf("\nElement is :%d",*ptr);
   ptr--;
   }
}