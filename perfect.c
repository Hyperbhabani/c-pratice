#include "stdio.h"
int main()
{
    int no;
    printf("Enter Any Number:\n");
    scanf("%d",&no);
    int res=0,i;
    for(i=1;i<no;i++)
    {
        if((no%i)==0)
        {
            res+=i;
        }
    }
    if(res==no)
    {
        printf("It is a perfect Number:\n");
    }
    else
    {
        printf("It is not a perfect Number:\n");
    }
}