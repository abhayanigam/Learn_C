#include <stdio.h>
long fact(int n){
    if (n>0){
        return (n*fact(n-1));
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}
