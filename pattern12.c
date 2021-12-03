#include<stdio.h>
int main()
{
int n,r,c;

printf("enter number of rows :");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
  
  for(c=1;c<=r;c++)
  { 
  if((r+c)%2==0)printf("*");
  else printf("$");
  }
  printf("\n");
}
return 0;
}
