#include <stdio.h>
void main()
{
   int i,s;
   printf("Enter the size of the array :");
   scanf("%d",&s);
   typedef int array;
   array list[s];
   printf("\n");
   for ( i = 0; i < s; i++)
   {
      printf("Enter the elements of this array  %d :",i+1);
      scanf("%d",&list[i]);
   }
   printf("\n");
   printf("So in this array %d the numbers are\n",s);
   for ( i = 0; i < s;i++)
   {
      printf("%d\n",list[i]);
   }
}