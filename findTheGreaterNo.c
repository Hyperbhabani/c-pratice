#include "stdio.h"
int main()
{
    int no1,no2,no3;
    printf("Enter no1:\n");
    scanf("%d",&no1);
    printf("Enter no2:");
    scanf("%d",&no2);
    printf("Enter no3:\n");
    scanf("%d",&no3);
    if(no1==no2==no3)
    {
        printf("ALL THE NOS ARE SAME");
        return 0;
    }
    else if(no1==no2)
    {
        if(no1>no3)
        {
            printf("no1 & no2 ARE MAXIMUM");
        }
        else
        {
            printf("no3 IS MAXIMUM");
        }
        return 0;
    }
    else if(no2==no3)
    {
        if(no2>no1)
        {
            printf("THE no2 & no3 ARE MAXIMUM:\n");
        }
        else
        {
            printf("THE no1 IS MAXIMUM:\n");
        }
        return 0;
    }
    else if(no1==no3)
    {
        if(no1>no2)
        {
            printf("no1 & no3 ARE MAXIMUM\n");
        }
        else
        {
            printf("no2 IS MAXIMUM:\n");
        }
        return 0;
    }
    
    else if(no1>no2)
    {
        if(no1>no3)
        {
            printf("THE no1 IS MAXIMUM");

        }
        else
        {
            printf("THE no3 IS MAXIMUM\n ");

        }
        return 0;
    }
    else{
        if(no2>no3)
        {
            printf("THE no2 IS MAXIMUM");
        }
        else
        {
            printf("THE no3 IS MAXIMU");
        }
        return 0;
    }

}