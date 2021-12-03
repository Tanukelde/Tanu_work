#include<stdio.h>
int main()
{
int n,sum=0,r,temp;
printf("enter the number\n");
scanf("%d",&n);
temp=n;
do{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
  }
   while(n!=0);
      if(temp==sum)
      printf("armstone");
      else
      printf("not armstone");
      
return 0;
}
