#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   int x=5;
   printf("size of int in bytes = %d\n",sizeof(x));

   float y=7.5;
   printf("size of float in bytes = %d\n",sizeof(y));

   double z=2.47;
   printf("size of double in bytes = %d\n",sizeof(z));

   char u='a';
   printf("size of char in bytes = %d",sizeof('a'));

}
