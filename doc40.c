//palindrome or not
#include<stdio.h>
int palindrome(int);
int n,r,sum=0,temp,a;

int palindrome(int a)
{ 
  temp=n;
  while(n>0)
  {
   r=n%10;
   sum=sum*10+r;
   n=n/10;
  }
   if(temp==sum)
   printf("number is palindrom");
   else
   printf("not palindrom");
}
 int main()
 {
   printf("enter the number\n");
   scanf("%d",&n);
   palindrome(a);
 }
