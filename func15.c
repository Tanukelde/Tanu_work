#include<stdio.h>
void pattern()
{

int i,j;
for(i=1;i<=9;i++)
  {
   for(j=1;j<=9;j++)
   if(i==1||j==1||i==9||j==9)
    printf("*");
    else
    printf(" ");
   printf("\n");
  }  
  }
int main()
{
 pattern();
    


return 0;
}
