#include<stdio.h>
int main()
{
int n,i;
printf("enter a number\n");
scanf("%d",&n);
i=2;
while(i<=n/2)
{
if(n%i==0)
break;
i++;
}
if(i>n/2&&n>=2)
printf("number is prime\n");
else
printf("number is not prime\n");

return 0;
}
