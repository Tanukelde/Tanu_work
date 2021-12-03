#include<stdio.h>
int main()
{
 int n,s=0,r,i=101;
 printf("enter the number\n");
 scanf("%d",&n);
 do
 {
  s=0;
  n=i;
 while(n!=0)
 {
  r=n%10;
  s=s*10+r;
  n=n/10;
 }
 printf("%d");
 
