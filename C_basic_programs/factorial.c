#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

int main()
{
    int number,i=1;
    unsigned long long facto =1;
    printf("Enter the number :");
    scanf("%d",&number);
    if (number<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else{
        while(i<=number)
    {
        facto = facto*i;
        i++;
    }
    printf("the factorial of the number is %llu\n",facto);
    }
    return 0;
}