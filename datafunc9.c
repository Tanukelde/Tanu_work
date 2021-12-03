#include<stdio.h>
void data();

void data()
{
  int i,j,space;
  for(i=1;i<=5;i++)
   {
    for(space=5;space>=i;space--)
    printf(" ");
    for(j=1;j<=i;j++)
     {
      if(j==1||i==j||i==5)
      printf("%d ",j);
      else
      printf("  ");
     }
    printf("\n");
   }
}
int main()
{
 data();
}
