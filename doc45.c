//armstrong or not
#include<stdio.h>
int armstrong(int);
int n,sum=0,r,temp,a;

int armstrong(int a)
{
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
}
int main()
{      
  printf("enter the number\n");
  scanf("%d",&n);
  armstrong(a);
}
