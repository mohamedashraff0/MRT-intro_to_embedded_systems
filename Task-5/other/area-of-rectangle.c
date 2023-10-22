#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int x,y,area;
    printf("To calculate the area of rectangle:- \n");
    printf("Please Enter :- \n  ");
    printf("1-length of rectangle : ");
    scanf("%d", &x);
    printf("  2-width of rectangle :  ");
    scanf("%d", &y);
    area=x*y;
    printf("The Area of rectangle equal %d",area);


}
