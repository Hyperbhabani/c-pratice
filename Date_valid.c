#include "stdio.h"
int main()
{
    int date,month,year;
    printf("Enter The date:\n");
    scanf("%d",&date);
    printf("Enter The mont:\n");
    scanf("%d",&month);
    printf("Enter any year:\n");
    scanf("%d",&year);
    if(date<=28)
    {
        printf("Its a valid date");
    }
    else if(date==29 && month==2 && year==(((year%4)==0 && year%100!=0)||year%400==0))
    {
        printf("It is a valid date");
    }
    else if(date<=31 && (month==1 || month==3 ||month==5 || month==7 || month==8 || month==10 || month==12))
    {
        printf("It is a valid no");
    }
    else if(date<=30 && (month==4||month==6||month==9||month==11))
    {
        printf("It is a valid date\n");
    }
    else 
    {
        printf("It kis not valid date:\n");
    }
}
