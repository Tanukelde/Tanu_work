#include<stdio.h>
int main()
{
int s=0,i=1,n;
printf("enter the number\n");
scanf("%d",&n);
while(i<=n)
{
s=s+i;
i++;
}
printf("%d",s);
return 0;
}
