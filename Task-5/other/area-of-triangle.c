#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int l,h;
    int area;
    printf("To calculate the area of triangle:- \n");
    printf("please Enter :-\n");
    printf("  1- length = ");
    scanf("%d", &l);
    printf("  2- height = ");
    scanf("%d", &h);

    area=.5*l*h;
    printf("The Area of triangle equal %d",area);


}
