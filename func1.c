#include<stdio.h>
void pattern()
{

int n=5,i,j;
printf("enter the number\n");
scanf("%d",&i);
printf("enter the number\n");
scanf("%d",&j);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
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
