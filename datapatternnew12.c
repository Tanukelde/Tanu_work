#include<stdio.h>
int main()
{
int i,j,space;
for(i=1;i<=5;i++)
 {
  for(space=8;space>i;space--)
  printf("*");
  for(j=1;j<=i;j++)
  printf("%d*",i);
  for(space=7;space>=i;space--)
  printf("*");
  
  printf("\n");  
 }


return 0;
}
