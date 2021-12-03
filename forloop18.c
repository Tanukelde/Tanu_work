#include<stdio.h>
int main()
{
int n,i=101,r,sum=0;
 for(i=101;i<=999;i++)
 {
 sum=0;
 for(n=i;n!=0;)
 {
  r=n%10;
  sum=sum*10+r;
  n=n/10;
 }
    if(sum==i)
     printf("%d\t",sum);
 }   
return 0;
}
