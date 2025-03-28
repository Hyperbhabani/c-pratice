#include "stdio.h"
int main()
{
        int r;
        printf("Enter the radius of any circle:-");
        scanf("%d",&r);
        int cir=2*3.141*r;
        printf("The circumfarence o fa circle:-%d\n",cir);
        int area=3.141*r*r;
        printf("\nArea of the circle is:-%d",area);
}