#include<stdio.h>
int main()
{
int n,i=2;
printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
printf("%d\n",i);
i=i+2;
n--;
}
return 0;
}
