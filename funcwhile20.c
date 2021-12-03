#include<stdio.h>
void feboneci(int);
int a,b,c,n;

void feboneci(int n)
{
  while(n!=0)
  {
   c=a+b;
   printf("%d\n",c);
   a=b;
   b=c;
   n--;
  }
}
int main()
{
  a=-1;
  b=1;
  printf("enter limit\n");
  scanf("%d",&n);
  feboneci(n);
}
