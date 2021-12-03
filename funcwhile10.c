#include<stdio.h>
void palindrom(int);
int n,r,sum=0,temp;
 
void palindrom(int n)
{
 while(n!=0)
 {
  r=n%10;
  sum=sum*10+r;
  n=n/10;
 }
 if(temp==sum)
 printf("number is palindrom");
 else
 printf("not palindrom");
}

int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 temp=n;
 palindrom(n);

}
