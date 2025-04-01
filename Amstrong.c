#include "Stdio.h"
int main()
{
    int no,ld;
    printf("Enter any no:\n");
    scanf("%d",&no);
    int temp=no;
    int res=0;
    while(no>0)
    {
        ld=no%10;
        res+=(ld*ld*ld);
        no=no/10;
    }
    if(temp==res)
    {
        printf("It is Amstrong No:\n");
    }
    else
    {
        printf("It is not a Amstrong no:\n");
    }
}