#include <stdio.h>
void printer(int largest);
int main()
{ 
    int size,i,largest;
        printf("enter the value of array size:");
        scanf("%d",&size);
        int myarray[size];

     for (int i = 0; i <size; i++)
    {
        printf("enter the values of element:");
        scanf("%d",&myarray[i]);
    }
        largest=myarray[0];
        for (int i = 1; i < size; i++)
             {            
            if (largest < myarray[i])
            largest=myarray[i];
        }
         
    printer(largest);
    return 0;
}
void printer(int largest){
   
    printf("the largest ans is :%d",largest);
} 