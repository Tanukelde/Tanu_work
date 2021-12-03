#include<stdio.h>
int main()
{
int i=1,number,factorial=1;
printf("enter the number\n");
scanf("%d",&number);
do{
 factorial=factorial*i;
 i++;
 }
   while(i<=number);
   printf("the factorial of %d: %d\n",number,factorial);
return 0;
}
