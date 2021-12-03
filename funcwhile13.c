#include<stdio.h>
void sumseries(int);
int x,n,sum=0,i=1,p,f=1;

void sumseries(int n)
{
 while(i<=n)
 {
  p=i;
  f=1;
  while(p!=0)
  {
   f=f*x;
   p--;
  }
  sum=sum+f;
  i++;
 }
 printf("%d",sum);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&x);
 printf("enter the number\n");
 scanf("%d",&n);
 sumseries(n);
}
