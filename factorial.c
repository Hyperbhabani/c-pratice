#include <stdio.h>
int factorial(int);
int main()
{
        int no;
        printf("Enter any no:-\n");
        scanf("%d",&no);
       int res= factorial(no);
       printf("The factorial of the no is :-%d",res);
        
}
int factorial(int number)
{
    if(number>0)
    {
        return number*factorial(number-1);
    }
    return 1;
}