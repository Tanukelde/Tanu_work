//reverse a given number using do while loop
#include<stdio.h>
int main()
{ 
  int n,sum=0,r,a;

  printf("enter the number\n");
  scanf("%d",&n);
  do{
     r=n%10;
     sum=sum*10+r;
     n=n/10;
    }
    while(n!=0);
    printf("%d",sum);
}

