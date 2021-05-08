#include <stdio.h>

int main()
{

	FILE *fp;

	fp = fopen("FILE.txt", "w");
	int x = 10;

	//Saving Data to FILE.txt
	fprintf(fp, "Hello World %d", x);
	fclose(fp);

	//Opening the file
	fp = fopen("FILE.txt", "r");

	int y;
	char first[10];
	char second[10];

	//Reading Data from FILE.txt
	fscanf(fp, "%s%s%d", first, second, &y);
	printf("%s %s %d", first, second, y);
	fclose(fp);

	return 0;
}
