#include "stdio.h"
int main()
{
    int no;
    printf("Enter the no you want get the sum of digit:\n");
    scanf("%d",&no);
     int res=sum(no);
     printf("The sum of dDigit:-%d",res);

}
int sum(int no)
{
    if(no>0)
    {
        int ldigit=no%10; 
        return ldigit+sum(no/10);
    }
}