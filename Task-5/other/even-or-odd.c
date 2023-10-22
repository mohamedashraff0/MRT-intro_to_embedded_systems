#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n;
    int sum;
    printf("To know the number is even or odd :- \n");
    printf("please Enter the number : ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Number is even");
    }
    else if(n%2==!0)
    {
        printf("Number is odd");
    }


}
