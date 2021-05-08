#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,result;
	char op;
		printf("Enter the 1st value :");
		scanf("%f",&a);
		printf("Enter the operation :");
		scanf(" %c",&op);
		printf("Enter the 2nd value :");
		scanf("%f",&b);
	switch (op)
	{
		case '+':
				result=a+b;
				printf("the sum of these no. is %f",result);
			break;
		case '-':
				result=a-b;
				printf("the substraction of these no. is %f",result);
			break;
		case '*':
				result=a*b;
				printf("the multiplication of these no. is %f",result);
			break;
		case '/':
				result=a/b;
				printf("the divion of these no. is %f",result);
			break;
		default:
			printf("Enter the valid operation\n");
	}
		printf("Exiting the program..........\n");
		exit (0);
	return 0;
}