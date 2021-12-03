#include<stdio.h>
int main()
{
int n,sum=0,r,temp;
printf("enter the number\n");
scanf("%d",&n);
temp=n;
do{
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
   while(n!=0);
    {
      if(temp==sum)
      printf("palindrom");
      else
      printf("not palindrom");
      }
return 0;
}
