#include<stdio.h>
int main()
{
int n,p,f=1,sum=0,i=1,x;
printf("enter the number\n");
scanf("%d",&x);
printf("enter the power\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

 for(p=i,f=1;p!=0;p--)
 {
  f=f*x; 
  }
   sum=sum+f;
  }

 printf("%d",sum); 
return 0;
}
