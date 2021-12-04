//reverse a given number
#include<stdio.h>
int reverse(int);
int n,r,reminder,i;

int reverse(int i)
{
 while(n!=0)
 {
  reminder=n%10;
  r=r*10+reminder;
  n=n/10;
 }
 printf("reverse number %d",r);
}

int main()
{ 
 printf("enter the number\n");
 scanf("%d",&n);
 reverse(i);
}
