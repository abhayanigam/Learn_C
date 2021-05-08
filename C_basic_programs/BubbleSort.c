#include <stdio.h>
int main()
{

	int i, j, temp;
	int a[10] = {56, 34, 76, 23, 73, 213, 766, 34, 77, 12, 88};

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("The Sorted Elements are\t");
	for (int k = 0; k < 10; k++)
	{
		printf("%d\t", a[k]);
	}
}
