#include<stdio.h>
int main()
{
int a,b,c,n;
a=-1;
b=1;
printf("enter limit\n");
scanf("%d",&n);
while(n!=0)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
n--;
}

return 0;
}
