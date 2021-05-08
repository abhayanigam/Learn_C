#include <stdio.h>
int main(){
	int a,b;
	int *pa,*pb;
	
	pa=&a; pb=&b;
	
	printf("Enter first integer: ");
	scanf("%d",pa);
	printf("Enter second integer: ");
	scanf("%d",pb);
	
	//compare 
	if(*pa==*pb)
		printf("1\n");
	else
		printf("0\n");
	
	return 0;
}