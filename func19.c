#include<stdio.h>
void pattern()
{
int i,j,space;
for(i=1;i<=11;i++)
  {
  for (space=1;space<i;space++)
   printf(" ");
   for(j=11;j>=i;j--)
    if(j==11||i==1||i==j)
   printf("* ");
   else
   printf("  ");
   
    printf("\n");
  }
  }
int main()
{
 pattern();
 
return 0;
}
