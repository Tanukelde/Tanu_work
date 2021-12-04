//display febonecci series using do while
#include<stdio.h>
int feboneci(int);
int a,b,c,n,x;
int feboneci(int x)
{
  a=-1;
  b=1;
 do
 {
   c=a+b;
   printf("%d\n",c);
   a=b;
   b=c;
   n--;
  }
  while(n!=0);
}
int main()
{
 printf("enter limit\n");
 scanf("%d",&n);
 feboneci(x);
}
