#include<stdio.h>
int max(int,int);

int max(int a,int b)
{
 if(a>b)
 return a;
 else
 return b;
}
int main()
{
 int a,b,c,d,x;
 printf("enter the number\n");
 scanf("%d",&a);
 printf("enter the number\n");
 scanf("%d",&b);
 printf("enter the number\n");
 scanf("%d",&c);
 printf("enter the number\n");
 scanf("%d",&d);
 x=max(max(a,b),max(c,d));
 printf("%d\n",x);
}
