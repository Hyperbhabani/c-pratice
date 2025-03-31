#include "Stdio.h"
int main()
{
    int no;
    printf("Enter a No:\n");
    scanf("%d",&no);
    int res=1;
    while(no>0)
    {
        res*=(no%10);
        no=no/10;
    }
    printf("Theproduct of Each Digit of no is:-%d\n",res);
}