#include<stdio.h>
void pattern()
{

int i,j,space;
for(i=1;i<=5;i++)
  {
  for (space=5;space>i;space--)
   printf(" ");
   for(j=1;j<=i;j++)
    printf("* ");
    printf("\n");
  }
}
int main()
{
 pattern();
 
return 0;
}
