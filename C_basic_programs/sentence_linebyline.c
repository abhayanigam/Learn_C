#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    printf("Enter the sentence:");
    fgets(c,100,stdin);
    for (int i=0; i<=strlen(c); i++) {
        if (c[i]==' ') {
            printf("\n");
        }
        else{
            printf("%c",c[i]);
        }
    }
}
