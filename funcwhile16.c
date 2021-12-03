#include<stdio.h>
void reverse(int);
int n,s=0,r,i=101;

void reverse(int i)
{
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
}
 int main()
  {
   reverse(i);
  }
