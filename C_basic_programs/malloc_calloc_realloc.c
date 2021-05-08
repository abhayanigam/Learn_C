// Program for malloc.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr,*p,sum=0,i;
    printf("enter the size of the array :");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    p=ptr;
    printf("Memory allocated by malloc :%u\n",ptr);
    if (ptr == NULL) {
        printf("Program is not allocated \n");
        exit(0);
    }
    for (i=1; i<=n; i++) {
        printf("Enter the elements :");
        scanf("%d",ptr);
        sum = sum + *ptr;
        ptr++;
    }

    for (i=0 ; i>n; i++) {
        printf("the element are :%d\n",*p);
        p++;
    }
    printf("Addition of the array is : %d\n",sum);
}

//Program for calloc.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr,*p,i,sum=0,sub=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    p = ptr;
    printf("Memory allocated %d\n",ptr);
    if(ptr == NULL)
    {
        printf("The program has NULL so it cannot go further ");
        exit(0);
    }
    for ( i = 1; i <=n ; ++i) {
        printf("Enter the element :");
        scanf("%d",ptr);
        sum = sum + *ptr;
        sub = sub - *ptr;
        ptr++;
    }
    for (i = 0;  i>n ; i++) {
        printf("the values of array :%d",p);
        p++;
    }
    printf("Addition of the array :%d\nSubstraction of the array :%d\n",sum,sub);
    return 0;
}

//Program for Realloc.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s,*ptr,sum=0,i,*p,*q;//p for malloc
    printf("Enter the size of the array :");
    scanf("%d",&s);
    ptr = (int*)malloc(s*sizeof(int));
    p=ptr;
    printf("Memory Allocated %u\n",ptr);
    if (ptr == NULL)
    {
        printf("Out of memory\n");
        exit(0); //0 means program ends with normal termination.
    }
    for ( i = 1; i <= s; i++)
    {
        printf("Enter %d the element:",s);
        scanf("%d",ptr);
        sum = sum + *ptr;
        ptr++;
    }
    printf("element are :");
    for ( i = 0; i <= s; i++)
    {
        printf("%d\n",*p);
        p++;
    }
    printf("Addition is %d\n",sum);
    printf("Enter new size for array");
    scanf("%d",&s);
    ptr = (int*)realloc(ptr, s * sizeof(int));
    if (ptr == NULL)
    {
        printf("Out of memory");
        exit(0);
    }
    printf("Reallocated memory %u\n",ptr);
    q= ptr;
    for ( i = 0; i <= s; i++)
    {
        printf("Enter %d Element",s);
        scanf("%d",ptr);
        sum = sum + *ptr;
        ptr++;
    }
    for ( i = 0; i <= s; i++)
    {
        printf("%d",*q);
        q++;
    }
    printf("Addition is %d\n",sum);
  return 0;
}
