#include<stdio.h>
int main()
{
int n,p,f=1;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the power\n");
scanf("%d",&p);
do{
   f=n*f;
   p--;
   }
   while(p!=0);
   printf("%d",f);
return 0;
}
