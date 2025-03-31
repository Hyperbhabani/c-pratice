#include "Stdio.h"
int main()
{
    int count=0;
    int no,i;
    printf("Enter any no:-");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            printf("%d is the Facter of %d\n",i,no);
            count++;
        }
    }
    if(count==2)
    {
        printf(" \nIt is A prime no:\n");
    }
}