#include "stdio.h"
int main()
{
    int size,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int tar;
    printf("Enter the target element:\n");
    scanf("%d",&tar);
    for(i=0;i<size;i++)
    {
        if(arr[i]==tar)
        {
            printf("Element Found:\n");
            return 0;
        }
    }
    printf("Element not found:\n");

}