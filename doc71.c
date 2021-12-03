//find the maximum between two number using switch case
#include<stdio.h>
int max(int);
int i;
int max(int i)
{
 int n1,n2;
 printf("enter the first number\n");
 scanf("%d",&n1);
 printf("enter the second number\n");
 scanf("%d",&n2);
 
 switch(n1>n2)
 {
  case 0: printf("%d is maximum",n2);
          break;
                 
  case 1: printf("%d is maximum",n1);
          break;
            
 default : printf("number is equal");
 }
}
          
int main()
{
 max(i);
}
