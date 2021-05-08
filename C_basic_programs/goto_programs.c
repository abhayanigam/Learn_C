#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,t;
    int ans;
    start:
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) {
        printf("Enter the element :");
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            if (arr[j]<arr[i]) {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("the elements are :-\n");
    for (i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    printf("do you want to rum this program again enter 1/0:");
    scanf("%d",&ans);
    if (ans ==1) {
        printf("way of goto");
        goto start;
    }
}

#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the number whose table you want to print?:");
    scanf("%d",&num);
    table:
    printf("%d x %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
        goto table;
}

#include <stdio.h>
int main()
{
    int num,i,p,ans;
    start:
    printf("Enter the size :");
    scanf("%d",&p);
    for (num=0; num<=p; num++) {
        for (i=2; i<num; i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            printf("%d - %d = %d\n",p,p-num,num);
        }
        printf("\n");
        printf("enter '1' if you want run again or '0' to exit :");
        scanf("%d",&ans);
        if (ans== 1) {
            goto start;
        }
    }
}

//goto statement of prime series.
#include <stdio.h>
int prime(int p);
int main()
{
    int p,ans;
    start:
    printf("\n");
    printf("Enter the size :");
    scanf("%d",&p);
    prime(p);
    printf("\n");
    printf("enter '1' if you want run again or '0' to exit :");
    scanf("%d",&ans);
    if (ans== 1) {
        goto start;
    }
}
int prime(int x){
    int num,i;
    for (num=0; num<=x; num++) {
        for (i=2; i<num; i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            printf("%d - %d = %d\n",x,x-num,num);
        }
    }
    return 0;
}