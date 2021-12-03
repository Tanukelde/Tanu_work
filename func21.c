#include<stdio.h>
void pattern()
{

int i,j;
for(i=1;i<=9;i++)
  {
   for(j=1;j<=9;j++)
   {
   if((i==j)||(j==9-i+1))
    printf("*");
    else
    printf(" ");
    }
   printf("\n");
  }  
}
int main()
{
 pattern();  
    


return 0;
}
