#include <stdio.h>
#define p printf(
#define f )
#define s scanf(
void gcd(int a,int b)
{
    if (a==b)
        p"a\n"f;
    
    else if ((b%a)==0)
        p"a\n"f;
    
    else if ((a%b)==0)
        p"b\n"f;
    
    else if (a>b)
        return (gcd(a%b,b));
    
    else if (a<b)
        return (gcd(a, b%a));
    
}
int main()
{
    int a,b;
    p"Enter the number for a :"f;
    s"%d",&a f;
    p"Enter the number for b :"f;
    s"%d",&b f;
    gcd(a, b);
}
