#include "stdio.h"
int natural(int,int);
int main()
{
    int i=1,no,res;
    printf("Enter the range of the natural no:\n");
    scanf("%d",&no);
    res=natural(i,no);
    printf("The sum of natural numbers in range %d is:-%d",no,res);
}
int natural(int i,int no)
{
    if(i<=no)
    {
        return i+natural(i+1,no);
    }
    return 0;
}