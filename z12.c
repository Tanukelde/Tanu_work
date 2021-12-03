#include<stdio.h>
int main()
{
int n,p,f=1;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the power\n");
scanf("%d",&p);
while(p!=0)
{
f=n*f;
p--;
}
printf("%d",f);
return 0;
}
