#include <stdio.h>
#include <stdlib.h>

void find_age_month_year(int current_date ,int current_month ,int current_year,int date_of_birth,int date_of_birth_month ,int date_of_birth_year){
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    if (current_date < date_of_birth)
    {
        current_date = current_date + month[date_of_birth_month -1];
        current_month--;
    }

    if (current_month < date_of_birth_month)
    {
        current_month = current_month + 12;
        current_year--;
    }

    int total_days = current_date - date_of_birth;
    int total_months = current_month - date_of_birth_month;
    int total_years = current_year - date_of_birth_year;

    printf("\n");

    printf("Your Present Age - Month - Year is\n Years : %d \n Month : %d \n Days  : %d \n",total_years,total_months,total_days);
}

int main()
{
    int current_date ,current_month , current_year;
    int date_of_birth, date_of_birth_month ,date_of_birth_year; 

    printf("Enter the Current Date :");
    scanf("%d",&current_date);
    printf("Enter the Current Month :");
    scanf("%d",&current_month);
    printf("Enter the Current Year:");
    scanf("%d",&current_year);

    printf("\n");

    printf("Enter the Date of Birth :");
    scanf("%d",&date_of_birth);
    printf("Enter the Date of Birth Month :");
    scanf("%d",&date_of_birth_month);
    printf("Enter the Date of Birth Year:");
    scanf("%d",&date_of_birth_year);

    find_age_month_year(current_date ,current_month , current_year, date_of_birth, date_of_birth_month ,date_of_birth_year);
}