#include  "stdio.h"
int main()
{
    int no;
    printf("Enter any no:\n");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("The no is even:\n");

    }
    else
    {
        printf("The no is odd:\n");
    }
}