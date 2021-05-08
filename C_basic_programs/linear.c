//linear search.
#include <stdio.h>
int main()
{
    int i,n,s;//,array[10];
        printf("Enter the size :");
        scanf("%d",&n);
    int array[n];
    for (i=0; i<n; i++) {
        printf("Enter the element no. %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("enter the no. to search :");
    scanf("%d",&s);
    for (i=0; i<n; i++) {
        if (array[i]==s) {
            break;
        }
    }
    printf("the no. %d is at the location of %d\n",s,i);
    return 0;
}