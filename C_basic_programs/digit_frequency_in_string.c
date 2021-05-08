#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter string with numbers :");
    scanf("%[^\n]%*c",s);

    int arr[10] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '0')
        {
            arr[0]++;
        }
        
        else if (s[i] == '1')
        {
            arr[1]++;
        }
        
        else if (s[i] == '2')
        {
            arr[2]++;
        }
        
        else if (s[i] == '3')
        {
            arr[3]++;
        }
        
        else if (s[i] == '4')
        {
            arr[4]++;
        }
        
        else if (s[i] == '5')
        {
            arr[5]++;
        }
        
        else if (s[i] == '6')
        {
            arr[6]++;
        }
        
        else if (s[i] == '7')
        {
            arr[7]++;
        }
        
        else if (s[i] == '8')
        {
            arr[8]++;
        }
        
        else if (s[i] == '9')
        {
            arr[9]++;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
}
