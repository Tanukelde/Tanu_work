#include<stdio.h>
int main()
{
int a,b,c,n;
a=-1;
b=1;
printf("enter limit\n");
scanf("%d",&n);
for( ;n!=0;n--)
  {
   c=a+b;
   printf("%d",c);
   a=b;
   b=c;
   }
return 0;
}
