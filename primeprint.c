#include "stdio.h"
int main()
{
    int no,i,count;
    for(no=1;no<=100;no++)
    {
        for(i=1;i<=no;i++)
        {
            if(no%i==0)
            {
                count++;

            }
        }
        if(count==2)
        {
            printf("%d\t",no);
        }
        count=0;

    }
}