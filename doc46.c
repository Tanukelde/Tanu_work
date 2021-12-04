//sum of natural number
#include<stdio.h>
int natural(int);
int i,n,sum=0,a;

int natural(int a)
{
 i=1;
do
 {
  sum=sum+i;
  i++;
 }
  while(i<=n);
  printf("sum =%d",sum);
}

int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 natural(a);
}
