#include<stdio.h>
int main()
{
int i,j,space,k;
for(i=1;i<=4;i++)
{
for(space=5;space>=i;space--)
printf(" ");
 for(j=1;j<=i;j++)
  printf("%d",j);
   for(k=j-2;k>=1;k--)
   printf("%d",k); 
   printf("\n");
 } 
   
return 0;
}
