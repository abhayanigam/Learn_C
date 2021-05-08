#include<stdio.h>
struct Student
{
    char stud_name[30];
    int roll_number;
    float percentage;
};                  // while defining structure

int main(){
    int i;
    struct Student stud_1[10];  // using struct keyword

    for (i = 0; i < 3; ++i) {
        printf("Enter details of stud_1 : \n");
        printf("Name : ");
        scanf("%s", stud_1[i].stud_name);
        printf("Roll Number : ");
        scanf("%d", &stud_1[i].roll_number);
        printf("Percentage : ");
        scanf("%f", &stud_1[i].percentage);

        printf("* Student 1 Details *\n");
        printf("Name of the Student : %s\n", stud_1[i].stud_name);
        printf("Roll Number of the Student : %i\n", stud_1[i].roll_number);
        printf("Percentage of the Student : %f\n", stud_1[i].percentage);
    }
        printf("Enter the no. to find :");
        scanf("%d",&i);
        int j = i;

        struct Student fifthStudent;

        printf("* Student 1 Details *\n");
        printf("Name of the Student : %s\n", stud_1[j].stud_name);
        printf("Roll Number of the Student : %i\n", stud_1[j].roll_number);
        printf("Percentage of the Student : %f\n", stud_1[j].percentage);

        printf("Eneter the correct details :");
        printf("Name : ");
        scanf("%s", stud_1[j].stud_name);
        printf("Roll Number : ");
        scanf("%d", &stud_1[j].roll_number);
        printf("Percentage : ");
        scanf("%f", &stud_1[j].percentage);

    for ( i = 0; i < 3; i++)
    {
         printf("* Student 1 Details *\n");
        printf("Name of the Student : %s\n", stud_1[i].stud_name);
        printf("Roll Number of the Student : %i\n", stud_1[i].roll_number);
        printf("Percentage of the Student : %f\n", stud_1[i].percentage);
    }
    return 0;
}