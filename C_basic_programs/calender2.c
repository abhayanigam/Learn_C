#include <stdio.h>
int main;
{
	int month,year,result;
		printf("Enter the month in digit:");
		scanf("%d",&month);
		printf("Enter the year in digit:");
		scanf("%d",&year);
    switch(result)
    {
    	case '1 || 3 || 5 || 7 || 8 || 10 || 12':
	    	result=31;
	    	printf("Number of days are %d\n",result);
	    	break;
    	case '2 && year%4':
	    	result=28;
	    	printf("Number of days are %d\n and it is a leap year",result);
	    	break;
    	case '2':
	    	result=28;
	    	printf("Number of days are %d\n",result);
	    	break;
	    case '4 || 6 || 9 || 11':
	        result=30;
	    	printf("Number of days are %d\n",result);
	    	break;
	    default:
	    printf("Enter the correct digit\n");
    }
    return 0;
}