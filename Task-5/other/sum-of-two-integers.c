#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n1,n2;
    int sum;
    printf("To calculate the sum of two integers:- \n");
    printf("please Enter :-\n");
    printf("  1- first integer = ");
    scanf("%d", &n1);
    printf("  2- second integer = ");
    scanf("%d", &n2);

    sum=n1+n2;
    printf("sum of two integers equal %d",sum);


}
