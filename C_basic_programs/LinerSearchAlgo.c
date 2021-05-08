#include <stdio.h>

int main()
{

	int array[10] = {2, 34, 56, 23, 65, 21, 67, 99, 45, 62};
	int flag, item, i;

	printf("Enter Item which you want to search\n");
	scanf("%d", &item);

	for (int i = 0; i < 10; i++)
	{
		if (array[i] == item)
		{
			flag = i + 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag != 0)
	{
		printf("Item found at postion %d\n", flag);
	}
	else
	{
		printf("\nItem Not Found\n");
	}

	return 0;
}
