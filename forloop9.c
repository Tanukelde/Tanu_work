#include<stdio.h>
int main()
{
int n,sum=0,r;
printf("enter the number\n");
scanf("%d",&n);
    
  for( ;n!=0; )
   {
   r=n%10;
    sum=sum*10+r;
    n=n/10;
    }
    printf("%d",sum);
   
return 0;
}
