#include "stdio.h"
int main()
{
    int size,mid,i,tar;
    printf("Enter hte size of the array:\n");
    scanf("%d",&size);
    int chiku[size];
    printf("Enter elements in assending order:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&chiku[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&tar);
    int high=size-1;
    int low=0;
    while(low<=high)
    {
        mid=(low+high)/ 2;
        if(chiku[mid]==tar)
        {
              printf("Element is found:\n");
           return 0;
          }
        else if(chiku[mid]>tar)
         {
           high=mid-1;
        }
     else
    {
        low=mid+1;
    }
}
printf("Element is not found:\n");

}