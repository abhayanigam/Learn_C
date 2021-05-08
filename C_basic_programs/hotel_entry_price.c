#include<stdio.h>
struct hotel
{
    char name[30];
    char address[30];
    char grade[2];
    int rooms;
    int charges;
};                  // while defining structure

int main(){
    int i;
    struct hotel hotel1[10];  // using struct keyword

    for (i = 0; i < 3; ++i) {
        printf("Enter details of hotel : \n");
        printf("Name : ");
        scanf("%s", hotel1[i].name);
        printf("address : ");
        scanf("%s", hotel1[i].address);
        printf("Grade : ");
        scanf("%s", hotel1[i].grade);
        printf("Room : ");
        scanf("%d", &hotel1[i].rooms);
        printf("Room charges : ");
        scanf("%d", &hotel1[i].charges);

        printf("* hotel %d Details \n",i);
        printf("hotel : %s\n", hotel1[i].name);
        printf("address : %s\n", hotel1[i].address);
        printf("Grade : %s\n", hotel1[i].grade);
        printf("room : %d\n", hotel1[i].rooms);
        printf("Room Charges : %d\n", hotel1[i].charges);
    }
    printf("\n");
    printf("-----hotel room charges-----\n");
    printf("\n");
    for ( i = 0; i < 3; i++)
    {
        printf("Room Charges : %d\n", hotel1[i].charges);
    }
    int s;
    printf("Enter the specified charge : ");
    scanf("%d", &s);
    for ( i = 0; i < 3; i++)
    {
        if (s>hotel1[i].charges)
        {
            printf("Hotel with charge less than specified value\n",hotel1[i].name);
        }
    }
}