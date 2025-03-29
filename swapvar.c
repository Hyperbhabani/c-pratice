#include "stdio.h"
int main()
{
    int x,y;
    printf("Enter the value of first variable:\n");
    scanf("%d",&x);
    printf("Enter the value of second variable:\n");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swaping the value of two variable is :%d & &%d",x ,y);
}