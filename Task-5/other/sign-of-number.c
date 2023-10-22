#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n;
    int sum;
    printf("To know the sign of number :- \n");
    printf("please Enter the number : ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("Number is positive");
    }
    else if(n<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number equal zero");
    }



}
