#include "Stdio.h"
int main()
{
        char ch;
        printf("Enter any charecter:\n");
        scanf("%c",&ch);
        if(ch>=48 && ch<=57)
        {
            printf("It is a Number\n");
        }
        else if(ch>=65 && ch<=90 ||ch>=97 && ch<=122)
        {
            printf("It is a Alaphabet:\n");
        }
        else
        {
            printf("It is a Symbol:\n");
        }
}