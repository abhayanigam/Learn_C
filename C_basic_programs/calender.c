#include <stdio.h>
int main()
{
	int month,year;
		printf("enter the monthe in digit :");
		scanf("%d",&month);
		printf("enter the Year :");
		scanf("%d",&year);
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("Number of days are 31");
	}
	else if ((month==2) && year%4==0)
	{
		printf("Number of days are 28 and it is a leap year");
	}
	else if ((month==2))
	{
		printf("Number of days are 28");
	}
	else
	{
		printf("Number of days are 30");
	}
	return 0;
}