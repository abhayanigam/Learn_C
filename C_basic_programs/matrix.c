#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, m, n, a, b, first[10][10], second[10][10], sum[10][10];
    printf("enter the no. of rows m :");
    scanf("%d", &m);
    printf("enter the no. of columns n :");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("Now enter the element of first row \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("Enter the no. a :");
            scanf("%d", &first[a][b]);
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("Now enter the element of second colunms \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("Enter the no. b :");
            scanf("%d", &second[a][b]);
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("so the sum of the matrix is \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            sum[a][b] = first[a][b] + second[a][b];
            printf("%d\t", sum[a][b]);
        }
        printf("\n");
    }
    printf("Exiting the program .........................\n");
    printf("\n");
    exit(0);
    return 0;
}