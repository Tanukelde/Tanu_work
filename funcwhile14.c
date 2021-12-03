#include<stdio.h>
void series(int);
int i=1,n,num,f=1;
float sum=0;

void series(int n)
{ 
  while(i<=n)
  {
   num=i,f=1;
   while(num!=1)
   {
    f=f*num;
    num--;
   }
   sum=sum+(float)i/f;
   i++;
  }
  printf("%f",sum);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 series(n);
}
