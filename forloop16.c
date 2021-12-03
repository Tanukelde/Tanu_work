#include<stdio.h>
int main()
{
int n,i;
printf("enter the value of n");
scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
  if(n%i==0)
  break;
  }
  if(i>n/2&&n>1)
     printf("number is prime");
     else
     printf("number is not prime");
    
return 0;
}
