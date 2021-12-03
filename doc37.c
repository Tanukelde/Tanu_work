//find number is armstrong
#include<stdio.h>
int armstone(int);
int n,r,sum=0,temp,a;

int armstone(int a)
{
  temp=n;
  while(n!=0)
  {
   r=n%10;
   sum=sum+r*r*r;
   n=n/10;
  }
  if(sum==temp)
  printf("number is armstone");
  else
  printf("number is not armstone");
}
 int main()
 {
  printf("enter the number\n");
  scanf("%d",&n);
  armstone(a);
 }
