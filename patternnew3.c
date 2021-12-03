#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
  {
   for(j=1;j<=15;j++)
   {
   if((i==9&&j<=7)||(j==9-i)||(i==1&&j>=9)||(j==9-i+7))
   printf("*");
   else
   printf(" ");
   }
  printf("\n");
   }

return 0;
}
