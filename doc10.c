//factorial of a given number
#include<stdio.h>
int givenfactorial(int);
int number,i=1,factorial=1,a;

int givenfactorial(int a)
{
  while(i<=number)
  {
   factorial=factorial*i;
   i++;
  }
  printf("\n%d\n",factorial);
}
int main()
{
  printf("enter the number to find factorial\n");
  scanf("%d",&number);
  givenfactorial(a);
}
