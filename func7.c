#include<stdio.h>
void pattern()
{

int i,j,n=9;
printf("enter the number\n");
scanf("%d",&i);
printf("enter the number\n");
scanf("%d",&j);
for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
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
