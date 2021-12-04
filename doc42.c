//sum of natural number
#include<stdio.h>
int natural(int);
int i,n,sum=0,a;

int natural(int a)
{
 i=1;
 while(i<=n)
 {
  sum=sum+i;
  i++;
 }
 printf("sum =%d",sum);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 natural(a);
}
