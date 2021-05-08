#include <stdio.h>
int main()
{

    int class, sub;
        printf("\nPlease enter the class obtained\n1=first 2=second 3=third:  ");
        scanf("%d", &class);
        printf("\n\nPlease enter the number of failed subjects:  ");
        scanf("%d", &sub);

    switch (class)
    {

    case 1:
        if (sub <= 3)
        {
            printf("\nGrace marks = 5 marks per subject.\n");
        }
        else
        {
            printf("\nNo Grace marks.\n");
        }
        break;

    case 2:
        if (sub <= 2)
        {
            printf("\nGrace marks = 4 marks per subject.\n");
        }
        else
        {
            printf("\nNo Grace marks.\n");
        }
        break;

    case 3:
        if (sub == 1)
        {
            printf("\nGrace marks = 5 marks per subject.\n");
        }
        else
        {
            printf("\nNo Grace marks.\n");
        }
        break;

    default:
        printf("please enter correct.\n");
        break;
    }
    return 0;
}