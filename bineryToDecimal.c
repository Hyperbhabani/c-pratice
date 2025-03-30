#include "stdio.h"
#include "conio.h"
#include "math.h"
void Decimal(int);
int main()
{
    int x;
    printf("Enter any  Binary no:\n");
    scanf("%d",&x);
    Decimal(x);

}
void  Decimal(int x)
{
    int count=0;
    int sum=0;
    while(x!=0)
    {
        int y=2;
        int p=pow(y,count);
        sum+=(x % 10)*p;
        count++;
        x=x/10;
    }
    printf("The binary value is:-%d",sum);
}