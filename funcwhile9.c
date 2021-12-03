#include<stdio.h>
void reverse(int);
int n,reverse=0;reminder;
void reverse(int n)
{
 while(n!=0)
 {
  reminder=n%10;
  reverse=reverse*10+reminder;
  n=n/10;
 }
 printf("reverse number %d",reverse);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 reverse(n);
}
