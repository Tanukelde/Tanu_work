#include<stdio.h>
int main()
{
int n,i,f=1,num;
float sum=0;
printf("enter a number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
num=i,f=1;
    while(num!=1)
    {
    f=f*num;
    num--;
    }
sum=sum+(float)i/f;
i++;
}
printf("%f",sum);    
return 0;
}
