#include<stdio.h>
int main()
{
int n,i,s,r;
 for(i=101;i<=999;i++)
 {
  s=0;
  n=i;
  for (n=i;n!=0;)
    {
     r=n%10;
     s=s+r*r*r;
     n=n/10;
     }
     if(i==s)
     printf("%d\n",s);
    }
return 0;
}
