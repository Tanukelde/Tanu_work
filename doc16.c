//The number is positive or negative
#include<stdio.h>
int pos_neg(int);
int number,i;

int pos_neg(int i)
{
  if(number>=0)
  printf("%d is positive number \n",number);
  else
  printf("%d is negative number\n",number);
}

int main()
{
 printf("Enter a number\n");
 scanf("%d",&number);
 pos_neg(i);
}
