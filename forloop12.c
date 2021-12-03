#include<stdio.h>
int main()
{
int n,p,f=1;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the power\n");
scanf("%d",&p);
for(f=1;p!=0;p--)
{
   f=n*f;
   }
  
   printf("%d",f);
return 0;
}
