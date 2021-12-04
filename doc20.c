//the number is even or odd
#include<stdio.h>
int evenodd(int);
int n;
 
int evenodd(int n)
{
 ((n%2)==0) ? printf("even") : printf("odd");
}
 
 int main()
 {
  printf("enter the number\n");
  scanf("%d",&n);
  evenodd(n);
 }
