#include  "stdio.h"
int main()
{
    int size,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int Array[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Array[i]);
    }
    int max=Array[0];
    for(i=0;i<size;i++)
    {
        if(Array[i]>max)
        {
            max=Array[i];
        }
    }
    printf("The largest Element is:%d",max);
}