#include "Stdio.h"
int main()
{
    int no;
    printf("Enter any no:-\n");
    scanf("%d",&no);
    while(no>1)
    {
        if(no%2==0)
        {
            no=no/2;
        }
        else 
        {
            printf("THE NO IS NOT THE POWEr of two:");
            return 0;
        }
    }
    printf("THE NO IS POWER OF TWO:\n");

}