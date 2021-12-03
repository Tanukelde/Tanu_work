#include<stdio.h>
int main()
{
int n,s=0,r,i=101;
while(i<=999)
{
   n=i;
   s=0;
   while(n!=0)
   {
   r=n%10;
   s=s*10+r;
   n=n/10;
   }
   printf("%d\n",s);
   i++;
}
return 0;
}
