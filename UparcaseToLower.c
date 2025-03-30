#include "Stdio.h"
int main()
{
     char ch;
    printf("Enter any UpaerCase charecter:\n");
    scanf("%c",&ch);
    char u=ch+32;
    printf("The lowercaswe charecter is:%c\n",u);
}