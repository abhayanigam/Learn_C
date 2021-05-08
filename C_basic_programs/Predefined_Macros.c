#include <stdio.h>

int main()
{
    printf("Predefined Macros :\n");

    printf("Current time :       %s\n",__TIME__);
    printf("Current file Name :  %s\n",__FILE__);
    printf("Current Date :       %s\n",__DATE__);
    printf("Line number is:      %d\n",__LINE__); 
    
    return 0;
}