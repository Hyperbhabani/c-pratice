#include "stdio.h"
int main()
{
    int no;
    printf("Enter any Number:\n");
    scanf("%d",&no);
    int temp=no;
    int res=0,ld;
    while(no>0)
    {
        ld=(no%10);
        res=(res*10)+ld;
        no=no/10;
    }
    if(temp==res)
    {
        printf("It is a palidrum Number:\n");
    }
    else
    {
        printf("It is not a palidrum Number:\n");
    }


}