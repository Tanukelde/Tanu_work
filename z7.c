//sum of following series....1-2+3-4+5-6.........+-n.
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==0)
sum=sum-i;
else
sum=sum+i;
i++;
}
printf("%d",sum);
return 0;
}
