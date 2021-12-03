#include<stdio.h>
void power(int);
int p,n,f=1;

void power(int n)
{
 while(p!=0)
 {
  f=f*n;
  p--;
 }
 printf("%d",f);
}

int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 printf("enter the power\n");
 scanf("%d",&p);
 power(n);
}
