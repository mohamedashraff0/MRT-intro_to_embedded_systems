#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,root1,root2,d;
    printf("EQN. a(x^2)+bx+c=0 \n");
    printf("Enter a,b,c To solve The Equation\n ");

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    d=(b*b)-4*a*c;

    if (d>0)
    {
       root1=(-b+sqrt(d))/2*a;
       root2=(-b-sqrt(d))/2*a;
       printf("Root 1 = %d ",&root1);
       printf("Root 2 = %d ",&root2);
    }
    else if (d==0)
    {
        root1=-b/(2*a);
        printf("root 1 = root 2 = %d",root1);
    }
    else
    {
        printf("The quadratic equation has no real roots ");
    }
/*
    printf("%f",sq);

    root1=((-b+sqrt((b*b)-4*a*c))/2*a);
    root2=((-b-sqrt((b*b)-4*a*c))/2*a);
    printf("Root 1=%d \n",root1 );
    printf("Root 2=%d ",root2 );*/

}
