#include<stdio.h>
void data();

void data()
{
 int i,j,k;
 for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
    {
     printf("%d",j);
    }
     for(k=i-1;k>=1;k--)
     {
      printf("%d",k);
     }
     printf("\n");
  }
}
int main()
{
 data();
}
