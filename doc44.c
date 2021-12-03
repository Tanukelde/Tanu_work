//reverse a given number using do while loop
#include<stdio.h>
int reverse(int);
int n,sum=0,r,a;

int reverse(int a)
{
  do{
     r=n%10;
     sum=sum*10+r;
     n=n/10;
    }
    while(n!=0);
    printf("%d",sum);
}
int main()
{ 
  printf("enter the number\n");
  scanf("%d",&n);
  reverse(a);
}
