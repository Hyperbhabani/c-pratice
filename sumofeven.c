//Sum of all the two digit even no
#include "stdio.h"
int sum(int);
int main()
{
    int x=10;
    int res=sum(x);
    printf("The sum of all the two digit even nos are:-\n");
    printf("%d",res);
}
int sum(int x)
{
    if(x<100)
    {
        return x+sum(x+2);
    }
    return 0;
}