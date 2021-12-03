#include<stdio.h>
int main()
{
int i,j,n=9,space;
printf("enter the number\n");
scanf("%d",&i);
printf("enter the number\n");
scanf("%d",&j);
for(i=1;i<=n;i++)
{
  
   for(j=1;j<=n;j++)
   {
   if(i==j||j==1||i==n)
   printf("*");
   else
   printf(" ");
   }
 printf("\n");
}
return 0;
}
