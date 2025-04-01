#include "stdio.h"
int main()
{
    int no,i,p;
    printf("Enter any Number:\n");
    scanf("%d",&no);
    for(i=1;i<=10;i++)
    {
        p=(no*i);
        printf("%d\t",p);
        
    }
}