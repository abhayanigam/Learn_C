#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,n,m,p;
    printf("Enter the size of the array 1 :");
    scanf("%d",&n);
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        printf("Element No. %d :",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the array 2 :");
    scanf("%d",&m);
    int arr2[m];
    for ( j = 0; j < m; j++)
    {
        printf("Elemen No. %d :",j+1);
        scanf("%d",&arr2[j]);
    }

    if ( n != m)
    {
        printf("The arrays are not identical\n");
    }
    else
    {
        int identical = 0; /// 0 -> identical , 1 = differenrt
        for (int k = 0; k < n; ++k) {
            printf("Value of k (%d) , arr1[k] = %d | arr2[k] %d \n", k, arr1[k], arr2[k]);
            if(arr1[k] != arr2[k]) {
                identical = 1;
                break;
            }
        }

        if(identical == 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}