#include<stdio.h>
void data();

void data()
{
 int i,j;
 for(i=1;i<=5;i++)
  {
   for(j=1;j<=6-i;j++)
    {
     if(i==1)
     printf("%d",j);
     else if(j==1)
     printf("%d",i);
     else if(i+j==6)
     printf("%d",i+j-1);
     else
     printf(" ");
    }
     printf("\n");
  }
}
int main()
{
  data();
} 
