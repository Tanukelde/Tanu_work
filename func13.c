#include<stdio.h>
void pattern()
{

int i,j;
for(i=9;i>=1;i--)
  {
   for(j=1;j<=i;j++)
    printf("*");
   printf("\n");
  }  
}
int main()
{
 pattern();  
    


return 0;
}
