#include <stdio.h>
#include <string.h>
#define p printf(
#define s scanf(
#define f )
void swap(char* x,char* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutation(char* str,int l,int r){
    int i;
    if (l==r) {
        p"%s \n", str f;
    }
    else{
        for (i=l; i<=r; i++) {
            swap((str + l), (str + i));
            permutation(str, l+1, r);
            swap((str + l), (str + i));
        }
    }
}
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permutation(str, 0, n-1);
}
