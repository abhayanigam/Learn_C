//binary search.
#include <stdio.h>
int main()
{
    int i,n,s,f,l,m;
        printf("Enter the size :");
        scanf("%d",&n);
    int array[n];
    for (i=0; i<n; i++) {
        printf("Enter the element no. %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("enter the no. to search :");
    scanf("%d",&s);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while (f<=l) {
        if (array[m]<s) {
            f=m+1;
        }
        else if (array[m]==s){
            printf("the no. %d is at the location of %d\n",s,m+1);
            break;
        }
        else {
            l=m-1;
            m=(f+l)/2;
        }
    }
    if (f>l) {
        printf("The entered no %d is not in the array.\n",s);
    }
    return 0;
}