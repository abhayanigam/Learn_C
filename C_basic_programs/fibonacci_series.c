#include <stdio.h>
int main()
{
    int f=0,s=1,nxt,no;
    printf("Enter the No. to check fibonacci Number :");
    scanf("%d",&no);
    for (int i=0; i<no; i++) {
        if (i<=1) {
            nxt = i;
        }
        else{
            nxt = f+s;
            f=s;
            s = nxt;
        }
        printf(" %d ",nxt);
    }
    printf("\n");
}
