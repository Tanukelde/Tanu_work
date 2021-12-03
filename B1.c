//(Q.1) W.A.P to find lowest number among four diffrent number.
#include<stdio.h>
int main()
{
int  a,b,c,d;
printf("enter 4 number\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b && a<c && a<d)
printf("a is lowest number\n",a);

if(b<c && b<d && b<a)
printf("b is lowest number\n",b);

if(c<d && c<a && c<b)
printf("c is lowest number\n",c);

if(d<a && d<b && d<c)
printf("d is lowest number\n",d);



return 0;
}
