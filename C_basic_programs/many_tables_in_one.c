#include<stdio.h>
void print_table(int *mul_table,int a)
{
    int num;
    printf("which table you wants to print :");
    scanf("%d",&num);
    printf("multiplication table of %d :-\n",num);
    for(int i=0;i<a;i++)
    {
        mul_table[i]=num*(i+1);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d * %d = %d \n",num,i+1,mul_table[i]);
    }
    printf("************************************\n");
}

int main()
{
    int m ,n ;
    
    printf("How many tables you wants to print :");
    scanf("%d",&m);
    printf("How much tables you wants to print :");
    scanf("%d",&n);
    int mul_table[m][n];
    
    for(int i=0;i<m;i++)
    {
    print_table(mul_table[i],n);
    }
    return 0;
}