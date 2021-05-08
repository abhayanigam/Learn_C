#include <stdio.h>
int main()
{
	int week;
		printf("Enter week in digit (1 to 7):");
		scanf("%d",&week);
			if (week==1)
			{
				printf("Today is Monday\n");
			}
			else if (week==2)
			{
				printf("Today is Tuesday\n");
			}
			else if (week==3)
			{
				printf("Today is wednesday\n");
			}
			else if (week==4)
			{
				printf("Today is Thursday\n");
			}
			else if (week==5)
			{
				printf("Today is Friday\n");
			}
			else if (week==6)
			{
				printf("Today is Saturday\n");
			}
			else
			{
				printf("Enjoy your Sunday\n");
			}
    return 0;
}