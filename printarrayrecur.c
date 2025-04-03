#include "stdio.h"
int prt(int*,int,int);
int main()
{
    int size,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Elements of array are:-");
    i=0;
    prt(array,size,i);
    
}
int prt(int *array,int size,int i)
{
    if(i<size)
    {
        printf("%d\t",array[i]);
        prt(array,size,i+1);
    }
}