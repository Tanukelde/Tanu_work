#include<stdio.h>
int main()
{
int n,p,f=0,sum,i=1,x;
printf("enter the number\n");
scanf("%d",&x);
printf("enter the number\n");
scanf("%d",&n);
do
{
p=i;
sum=1;
while(p!=0)
{
sum=sum*x;
p--;
}
f=f+sum;
i++;
}
    while(i<=n);
   printf("%d",f);
  
return 0;
}
