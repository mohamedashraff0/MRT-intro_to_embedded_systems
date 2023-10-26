#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int i,tax;
 printf("To Know The Income TAx :-\n");
 printf("please Enter Number your Income  ");
 scanf("%d",&i);

   if (i<=7000)
   {
       printf("Your Are exempted ");
   }
   else if (i>=7000&&i<2000)
   {
       tax=i*.1;
       printf("Your tax Is %d",tax);
   }
   else if (i>=20000&&i<45000)
   {
       tax=i*.15;
       printf("Your tax Is %d",tax);
   }
   else if (i>=45000&&i<200000)
   {
       tax=i*.20;
       printf("Your tax Is %d",tax);
   }
   else if (i>=200000)
   {
       tax=i*.40;
       printf("Your tax Is %d",tax);
   }
}
