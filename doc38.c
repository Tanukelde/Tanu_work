//display  faboneci series
#include<stdio.h>
int feboneci(int);
int a,b,c,n,x;
int feboneci(int x)
{
  a=-1;
  b=1;

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
 printf("enter limit\n");
 scanf("%d",&n);
 feboneci(x);
}
