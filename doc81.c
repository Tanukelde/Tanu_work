//maximum number among the given three number
#include<stdio.h>

int a,b,c,x,i;
int main()
{
 printf("enter 3 number\n");
 scanf("%d%d%d",&a,&b,&c);
 x=(a>b)?a:b;
(x>c) ? printf("%d is greater",x): printf("%d is greater",c);
}

