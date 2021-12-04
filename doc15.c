//Greatest number among the given three number
#include<stdio.h>
int greatest(int);
int a,b,c,x,i;

int greatest(int i)
{
 x=(a>b)?a:b;
(x>c) ? printf("%d is greater",x): printf("%d is greater",c);
}

int main()
{
 printf("enter 3 number\n");
 scanf("%d%d%d",&a,&b,&c);
 greatest(i);
}
