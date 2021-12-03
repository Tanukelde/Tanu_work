#include<stdio.h>
int main()
{
int i,j,k,space;
for(i=1;i<=5;i++)
 {
  for(space=5;space>i;space--)
  printf(" ");
  for(j=i;j<i+i;j++)
  printf("%d",j);
  for(k=j-2;k>=i;k--)
  printf("%d",k);
  
  printf("\n");  
 }


return 0;
}
