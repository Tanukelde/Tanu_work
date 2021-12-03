//palindrome or not
#include<stdio.h>
int palindrom(int);
int n,sum=0,r,temp,a;

int palindrom(int a)
{
  temp=n;
 do
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
   while(n!=0);
    {
     if(temp==sum)
     printf("palindrom");
     else
     printf("not palindrom");
    }
}
 int main()
  {
   printf("enter the number\n");
   scanf("%d",&n);
   palindrom(a);
  }
