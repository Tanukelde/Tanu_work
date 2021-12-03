#include<stdio.h>
int main()
{
int n,sum=0,r,temp;
printf("enter the number\n");
scanf("%d",&n);
temp=n;
for( ;n!=0; )
{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
  }   
      if(temp==sum)
      printf("armstone");
      else
      printf("not armstone");
      
return 0;
}
