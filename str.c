#include "stdio.h"
#define max 90
int main()
{
    int i,ch,mid;
    char chiku[max],gg,temp;
    printf("Enter the charecters of yours name\n");
    for(i=0;i<max;i++)
    {
        printf("Enter charecter:\n");
        scanf("%c",&chiku[i]);
        printf("If your charecters of name is ended then enter 0 else any non zero value:\n");
        scanf("%d",&ch);
        scanf("%c",&gg);
        if(ch==0)
        {
            break;
        }
    }
    i++;
    int lindex=i;
    chiku[i]='\0';
    printf("Elements of charecter before reverse:\n");
    for(i=0;i<=lindex;i++)
    {
        printf("%c\t",chiku[i]);
    }
    if((lindex+1)%2==0)
    {
        mid=(0+lindex)/2;
        for(i=0;i<=mid;i++)
        {
            temp=chiku[i];
            chiku[i]=chiku[lindex-i];
            chiku[lindex-i]=temp;
        }
    }
    else
    {
        mid=(0+lindex)/2;
        for(i=0;i<mid;i++)
        {
            temp=chiku[i];
            chiku[i]=chiku[lindex-i];
            chiku[lindex-i]=temp;
        }
    }
    printf("Elements of charecter after reverse:\n");
    for(i=0;i<=lindex;i++)
    {
        printf("%c\t",chiku[i]);
    }
    
}