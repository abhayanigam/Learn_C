#include <stdio.h>
int main ()
{
	        int size, i, largest;
 
        printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        int array[size];
 
        printf("\n Enter %d elements of  the array: \n", size);
 
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
        }
 zz
        for (i = 1; i < size; i++) 
        {
            if (largest < array[i])
            largest = array[i];
        }
 
        printf("\n largest element present in the given array is : %d", largest);
 
        return 0;
}