#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[50];
    unsigned long long int rollno;
    float percentage;
}stud;
void printstruct(char name[50],unsigned long long int rollno, float percentage);
void main()
{
    char name[50];
    unsigned long long int rollno = 0;
    float percentage;
        stud student1;
            printf("Enter the name :");
            fgets(student1.name, 50, stdin);//stdin is the standard inputs and fgets is use to store longe name in the array
            printf("Enter thee rollno. :");
                scanf("%llu", &student1.rollno);
            printf("Enter the percentage :");
                scanf("%f", &student1.percentage);
            printf("\n");
            printf("******student detail******\n");
            printstruct(student1.name, student1.rollno, student1.percentage);
}
void printstruct(char name[50],unsigned long long int rollno, float percentage)
{
    printf("Name of the student is %s", name);
    printf("Rollno. of the student is %llu\n", rollno);
    printf("Percentage of the student is %.1f\n", percentage);
}