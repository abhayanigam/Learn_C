#include <stdio.h>
#include <math.h>

int sumSeries(int length);// make a fuction 

int factorial(int d);//second function

int main() {
    int n;
    printf("Enter the length of series:");
    scanf("%d", &n);

    int sum = sumSeries(n);

    printf("\nSum of the series is %d:", sum);
    return 0;
}

int sumSeries(int length) {

    int sum=0;
    for (int i = 1; i <= length; ++i) {
        int n = pow(i, i)/i;
        printf("n = %d", n);
        sum = sum + factorial(n);
    }
    return sum;
}

int factorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial= factorial * i;
    }
    return factorial;
}