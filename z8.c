#include<stdio.h>
int main()
{
int number,i=1,factorial=1;
printf("enter the number to find factorial\n");
scanf("%d",&number);
while(i<=number)
{
factorial=factorial*i;
printf("\n%d\n",factorial);
i++;
}
return 0;
}
