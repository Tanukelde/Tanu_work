#include<stdio.h>
void factorial(int);
int i=1,number,factorial=1;

void factorial(int i)
{ 
 while(i<=number)
 { 
  factorial=factorial*i;
  i++;
 }
 printf("the factorial of %d is: %d",number,factorial);
}

 int main()
 {
  printf("enter the number\n");
  scanf("%d",&number);
  factorial(i);
 }
