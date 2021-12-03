#include<stdio.h>
void pattern()
{

int i,j,space;
for(i=9;i>=1;i--)
  {
   for(space=1;space<i;space++)
   printf(" ");
   
   for(j=1;j<=7;j++)
   {
   if(j==1 ||j==7||i==9||i==1)
   printf("*");
   else
   printf("*");
   }
  printf("\n");
   }
}
int main()
{
  pattern();
    
return 0;
}
