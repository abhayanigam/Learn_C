#include <stdio.h>
#include <stdarg.h>

int getsum(int num, ...){
    va_list list;
    int sum = 0;
    
    va_start(list, num);
    for (int i = 0; i < num; i++) {
        int n = va_arg(list, int);
        sum += n;
    }
    va_end(list);
    return sum;
}

int main(){
    printf("The sum of 2 digit is : %d \n",getsum(2,4,6));
    printf("The sum of 2 digit is : %d \n",getsum(3,4,6,5));
}
