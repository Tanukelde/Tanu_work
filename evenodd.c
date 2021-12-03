#include<stdio.h>
int evenodd(int n){
 if(n%2==0)
 return 0;
 else
 return 1;
}
int main()
{
 int x,n;
 printf("enter the number\n");
 scanf("%d",&n);
 if(evenodd(n))
 printf("odd");
 else
 printf("even");
}
