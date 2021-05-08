#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,c,f=1,p=0;
        printf("Enter the (1 for factorial),(2 for prime no.) and (3 for odd or even) :");
        scanf("%d",&c);
    switch (c) {
        case 1:
            printf("Enter Number:");
            scanf("%d",&a);
            for (int i=1; i<=a; i++) {
                f=f*i;
            }
            printf("The factorial of this number is %d\n",f);
            break;
        case 2:
            printf("Enter a number for prime:");
            scanf("%d",&a);
            for (int i=1; i<=a; i++) {
                if (a%i==0)
                {
                    p++;
                }
            }
            if (p==2) {
                printf("the no is a prime no:%d\n",a);
            }
            else{
                printf("This no. is not a prime no.%d\n",a);
            }
                break;
        case 3:
            printf("Enter a number for odd or even:");
            scanf("%d",&a);
            if (a%2==0) {
                printf("this is even %d\n",a);
            }
            else{
                printf("this is odd %d\n",a);
            }
        default:
            printf("Please enter the valid no.\n");
            break;
    }
    printf("Exiting the program...........\n");
    exit (0);
    return 0;
}

