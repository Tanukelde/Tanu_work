#include<stdio.h>
int main()
{
int i,n,sum=0;
i=1;
printf("enter the number\n");
scanf("%d",&n);
do{
    if(i%2==0)
    sum=sum-i;
    else
    sum=sum+i;
    i++;
 }
   while(i<=n);
   printf("%d",sum);
return 0;
}
