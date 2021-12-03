#include<stdio.h>
void pattern()
{

int i,j;
for(i=9;i>=1;i--)
  {
   for(j=9;j>=1;j--)
   if(j<=i)
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
