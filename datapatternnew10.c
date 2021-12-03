#include<stdio.h>
int main()
{
int i,j,k=1;
for(i=1;i<=4;i++)
 {
  for(j=1;j<=i;j++,k++)
  {
  if(j==1)
  printf("%d",k);
  else
  printf("*%d",k);
  }
  printf("\n");
  }
  for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++,k++)
  {
  if(k==11)
  k=k-i;
  if(j==1)
  printf("%d",k);
  else
  printf("*%d",k);
  }
  k=k-i*2+1;
  printf("\n");  
 }


return 0;
}
