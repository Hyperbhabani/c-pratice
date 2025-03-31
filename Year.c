#include "Stdio.h"
int main()
{
    int extradate,extramonth;
    int date,dateb,month,monthb,year,yearb;
    printf("Enter Your current date,Month,Year\n");
    scanf("%d %d %d",&date,&month,&year);
    printf("Enter your Birthday date,Mont,Year\n");
    scanf("%d %d %d",&dateb,&monthb,&yearb);
    int currage=year-(yearb+1);
    if(monthb==1||monthb==3||monthb==5||monthb==7||monthb==8||monthb==10||monthb==12)
    {
         extradate=date+(31-dateb);
    }
    else if(monthb==4||monthb==6||monthb==9||monthb==11)
    {
        extradate=date+(30-dateb);
    }
    else if(monthb==2)
    {
         extradate=date+(28-dateb);
    }
    else{
        printf("Invalid month\n");
    }
     extramonth=(12-(monthb+1))+(month-1);
    if(extradate>=60)
    {
        extramonth+=2;
        extradate=extradate-60;
   }
   else if(extradate>=30)
   {
    extramonth++;
    extradate-=30;
   }
   else
   {
    
   }
   if(extramonth>=12)
   {
    currage++;
    extramonth-=12;
   }
   else
   {
    
     }
     printf("Your age is %d month is %d and day is%d\n",currage,extramonth,extradate);
    }