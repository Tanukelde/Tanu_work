//W.A.P to check whether given number is even or odd without using % operater.
#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);

if ((n/2)*2==n)
printf("%d is even number\n",n);

else
printf("%d is odd number\n",n);

return 0;
}
