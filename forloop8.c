#include<stdio.h>
int main()
{
int i=1,number,factorial=1;
printf("enter the number\n");
scanf("%d",&number);

for(i=1;i<=number;i++)
factorial=factorial*i;
{
 printf("the factorial of %d: %d\n",number,factorial);
 }
   
   
return 0;
}
