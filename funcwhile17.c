#include<stdio.h>
void palindrom(int);
int n,i=101,s,r;

void palindrom(int i)
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
      if(i==s)
      printf("%d\n",s);
      i++;
   }
}
int main()
{
  palindrom(i);
}
