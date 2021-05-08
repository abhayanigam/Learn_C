#include <stdio.h>
int main()
{
    int i,n,l;
    printf("Enter the size :");
    scanf("%d",&n);
    int array[n];
    for (i=0 ; i<n; i++) {
        printf("enter the element no. %d :",i+1);
        scanf("%d",&array[i]);
    }
    l=array[0];
    int index=array[i];
    for (i=0; i<n; i++) {
        if (l<array[i]) {
            l=array[i];
            index =i;
        }
    }
    for (i=0; i<1; i++) {
        for (i=0; i<10; i++) {
            printf(" ");
        }
        printf("the largest no is :%d\n",l);
        printf("\tthe location of this no is :%d\n",index+1);
    }
    return 0;
}