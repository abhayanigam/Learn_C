#include <stdio.h>
void printeradd(int a, int b);//declaration
int main()
{
	int a,b;
	printf("enter the 1st value :");
	scanf("%d",&a);
	printfg("enter 2nd value :");
	scanf("%d",&b);
	printeradd(a,b);//call
	return 0;
}
//implimentation
void printeradd(int a,int b){
	int c;
	c=a+b;
	printf("your ans is %d\n",c);
}