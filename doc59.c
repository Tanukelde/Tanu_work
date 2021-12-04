//find GCD of two number using for loop
#include<stdio.h>
int GCD(int);
int n1,n2,i,gcd,a;

int GCD(int a)
{
 for(i=1;i<=n1&&i<=n2;++i)
 {
  if(n1%i==0&&n2%i==0)
  gcd=i;
 }
 printf("gcd of %d and %d is %d",n1,n2,gcd);
}

int main()
{
 printf("enter the two number\n");
 scanf("%d%d",&n1,&n2);
 GCD(a);
}
