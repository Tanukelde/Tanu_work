#include<stdio.h>
void data();

void data()
{
 int i,j,n;
 for(i==1;i<=4;i++)
  {
   for(j=1;j<=3;j++)
    {
     if(j==2&&i>1&&i<4)
     printf("%d",i-1);
     else
     printf("%d",n);
    }
    printf("\n");
  }
}  
int main()
{ 
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 data();
}
