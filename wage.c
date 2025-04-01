#include "stdio.h"
int main()
{
    float hourlyrate;
    float hourWorked;
    printf("Enter the Hourly rate:\n");
    scanf("%f",&hourlyrate);
    printf("Enter the Working hours:\n");
    scanf("%f",&hourWorked);
    float DailyWage=hourlyrate*hourWorked;
    printf("The Daily Wages of a man is:-%f",DailyWage);
}