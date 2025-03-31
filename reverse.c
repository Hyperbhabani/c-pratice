#include "stdio.h"
int main()
{
    int res=0;
    int no;
    printf("Enter any no:\n");
    scanf("%d",&no);
    while(no>0)
    {
        int ldigit=(no%10);
        res=(res*10)+ldigit;
        no=no/10;
    }
    printf("The Reversed no is:-%d\n",res);
}