#include <stdio.h>
int main()
{
   char a[100];
   int wordcount = 1;
   int i = 0;
   printf("Enter the santence followed by dot :");
   fgets(a, 100, stdin); //standard inputs
   for (; i < 100; i++)
   {
      if (a[i] == ' ')
      {
         wordcount++;
      }
      if (a[i] == '.')
      {
         break;
      }
   }
   printf("No of characters %d\n", i);
   printf("\nthe no word is %d\n", wordcount);
   return 0;
}