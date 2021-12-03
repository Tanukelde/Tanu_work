//reverse a given number
#include<stdio.h>
int main()
{ 
 int n,r,reminder,i;
 printf("enter the number\n");
 scanf("%d",&n);
 while(n!=0)
 {
  reminder=n%10;
  r=r*10+reminder;
  n=n/10;
 }
 printf("reverse number %d",r);
}
