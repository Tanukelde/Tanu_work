#include<stdio.h>
int main()
{
int i,j;
for(i=3;i<=6;i++)
 {
  for(j=3;j<=i;j++)
  {
  printf("%d",i);
  }
  printf("\n");
  }
 for(i=6;i>2;i--)
  {
   for(j=3;j<=i;j++)
    {
    printf("%d",i);
    }
    printf("\n");
    }

return 0;
}
