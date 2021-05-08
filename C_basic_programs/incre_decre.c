#include <stdio.h>
int main()
{
    int a = 5;
    int b = ++a + a++ + --a;
    /*
      STEP 1;
      b = ++a + a++ + --a;
      a = a+1
      finale value of a=6
      b = 6 + a++ + --a;

      Step 2;
      b = 6 + a++ + --a;
      finale value of a= 6;
      a++ = 6
      b = 6 + 6 + --a;
      a = a+1;
      finale value of a = 7;

      Step 3;
      b = 6 + 6 + --a;
      finale value of a = 7
      --a = 1-7;
      finale value of a = 6;
      b = 6+6+6
      b= 18
    */
    printf("Value of b is %d\n", b);
    printf("Value of a is %d\n", a);
    printf("Value of ++a is %d\n", ++a);
    printf("Value of a++ is %d\n", a++);
    printf("Value of --a is %d\n", --a);
}
