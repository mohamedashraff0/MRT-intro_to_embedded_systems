#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int m;
 printf("To Know The Grade :-\n");
 printf("please Enter Number your mark  ");
 scanf("%d",&m);

   if (m<50)
   {
       printf("Your Grade Is fail");
   }
   else if (m>=50&&m<65)
   {
       printf("Your Grade Is pass");
   }
   else if (m>=65&&m<80)
   {
       printf("Your Grade IS GOOD ");
   }
   else if (m>=80&&m<90)
   {
       printf("Your Grade IS vety GOOD ");
   }
   else if (m>=90&&m<100)
   {
       printf("Your Grade IS Excellent ");
   }





}
