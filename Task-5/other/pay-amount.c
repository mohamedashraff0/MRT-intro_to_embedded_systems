#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int amount,coins50,coins25,coins10,coins5,coins1;
  printf("please Enter price : ");
  scanf("%d", &amount);                                     /*amount=price*/

   printf("Total amount :- \n");

  if(amount>=50)
   {
      coins50=amount/50;
      amount=amount-(coins50*50);
      printf("  %d coins of Fifty pounds denomination \n ",coins50);
   }
   else
    {
            printf("  0 coins of Fifty pounds denomination \n ");
    }

  if(amount>=25)
   {
      coins25=amount/25;
      amount=amount-(coins25*25);
      printf("  %d coins of Twenty five pounds denomination \n ",coins25);
   }
  else
    {
            printf("  0 coins of Twenty five pounds denomination \n ");
    }

  if(amount>=10)
  {
      coins10=amount/10;
      amount=amount-(coins10*10);
       printf("  %d coins of ten pounds denomination \n ",coins10);
  }
  else
    {
            printf("  0 coins of ten pounds denomination \n ");
    }

  if(amount>=5)
  {
      coins5=amount/5;
      amount=amount-(coins5*5);
      printf("  %d coins of Five pounds denomination \n ",coins5);
  }
  else
    {
            printf("  0 coins of Five pounds denomination \n ");
    }

  if(amount>=1)
  {
      coins1=amount/1;
      amount=amount-(coins1*1);
      printf("  %d coins of one pounds denomination \n ",coins1);
  }
  else
    {
             printf("  %d coins of one pounds denomination \n ",coins1);
    }


    return 0;
}
