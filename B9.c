//W.A.P to check number is divisable by 5 or 11 or not.
#include<stdio.h>
int main()
{
int number;
printf("enter the number is divisable by 5 or 11\n");
scanf("%d",&number);

if((number %5==0) && (number %11==0))
printf("given number %d is divisable 5 or 11\n",number);
else
printf("given number %d is not divisable 5 or 11\n",number);
return 0;
}
