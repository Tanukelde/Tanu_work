#include<stdio.h>
void armstone(int);
int s=0,r,n,i=101;

void armstone(int i)
{
 while(i<=999)
  {
   n=i;
    while(n!=0)    
     {
      r=n%10;
      s=s+r*r*r;
      n=n/10;
     }     
   if(i==s)
   printf("%d\n",i);
   i++;
   s=0;
  }
}
int main()
{
  armstone(i);
}
