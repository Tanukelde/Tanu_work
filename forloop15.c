#include<stdio.h>
int main()
{
int n,f=1,num,i=1;
float sum=0;
printf("enter the value of n");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  f=1;
  for (num=i;num!=1;num--)
    {
     f=f*num;
     }
   sum=sum+(float)i/f;
   }
     printf("%f\n",sum);
    
return 0;
}
