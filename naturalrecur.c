#include "stdio.h"
int natural(int,int);
int main()
{
    int no;
    printf("Enter the limit of the natural no you want to Print:\n");
    scanf("%d",&no);
    int i=1;
    natural(i,no);
}
int natural(int i,int no)
{
    if(i<=no)
    {
        printf("%d\t",i) ;
        natural(i+1,no);
    }

}