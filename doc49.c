//count number of digit of an integer
#include<stdio.h>
int digit(int);
long int n;
int count=0,a;

int digit(int a)
{
 do
 {
  n=n/10;
  ++count;
 }while(n!=0);
 printf("number of digits:%d",count);
}
int main()
{
 printf("enter an integer\n");
 scanf("%ld",&n);
 digit(a);
}
