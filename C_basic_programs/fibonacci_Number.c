#include <stdio.h>
#include <math.h>

int is_fib_prime(int n);

int isPrime(int n);

int fibonacciNumber(int n);

int main() {
    int n;
    printf("Enter the element of fibonacci to be checked:");
    scanf("%d", &n);

    int result = is_fib_prime(n);
    if(result == 0) {
        printf("%d element of fibonacci series is a prime number\n", n);
    } else {
        printf("%d element of fibonacci series is NOT a prime number\n", n);
    }

    return 0;
}

int is_fib_prime(int n) {

    int e = fibonacciNumber(n);
    printf("Fibonacci number %d\n", e);

    return isPrime(e);
}

int fibonacciNumber(int n) {

    int fn[n + 2];   
    int i;
    fn[0] = 0;
    fn[1] = 1;

    for (i = 2; i <= n; i++)
    {
        fn[i] = fn[i - 1] + fn[i - 2];
    }

    return fn[n];
}

int isPrime(int num) {
    int i, p = 0;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}