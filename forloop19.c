#include<stdio.h>
int main()
{
int r,n,s=0;
printf("enter the number\n");
scanf("%d",&n);
for( ;n!=0;)
{
 r=n%10;
 s=s*10+r;
 n=n/10;
 
   for( ;s!=0;)
 {
  r=s%10;
  switch(r)
   {
    case 0:printf("zero");break;
    case 1:printf("one");break;
    case 2:printf("two");break;
    case 3:printf("three");break;
    case 4:printf("four");break;
    case 5:printf("five");break;
    case 6:printf("six");break;
    case 7:printf("seven");break;
    case 8:printf("eight");break;
    case 9:printf("nine");break;
   }
   s=s/10;
   }
   }
   return 0;
}
