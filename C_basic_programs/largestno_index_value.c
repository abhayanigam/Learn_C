#include <stdio.h>
#include <string.h>
int main ()
{
    int l,i,n,f,p,m;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter array elements no. %d:",i+1);
        scanf("%d",&array[i]);
    }
    l= array[0];
    int index = 0;
    for ( i = 1; i < n; i++)
    {
        if (l < array[i])
            l = array[i];
            index = i;
    }

    printf("the largest no is %d at location of %d\n",l,index);
    f= 0;
    p= n-1;
    m= (f+p)/2;
    while (f <= p)
    {
            if (array[f] < l)
            {
                f= f+1;
            }
            else if (array[f] == l)
            {
                printf("Eneter the no. %d is at the location of %d\n",l,f+1);
                break;
            }
    }
    return 0;
}