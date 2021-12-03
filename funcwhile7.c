#include<stdio.h>
void sum(int);
int n,i=1,sum=0;
void sum(int n)
{
 while(i<=n)
 { 
  if(i%2==0)
  sum=sum-i;
  else
  sum=sum+i;
  i++;
 }
 printf("%d",sum);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 sum(n);
}
