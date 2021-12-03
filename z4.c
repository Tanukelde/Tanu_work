#include<stdio.h>
int main()
{
int n,i=1;
printf("enter the numebr\n");
scanf("%d",&n);
while(n> 0)
{
printf("%d\n",i);
i=i+2;
n--;
}
return 0;
}
