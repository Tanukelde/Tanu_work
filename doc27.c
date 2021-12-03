//input month number and print number of days in that month
#include<stdio.h>
void month();
int n;

void month()
{
 if(n==1||n==3||n==5||n==7||n==9||n==11)
 printf("31 days");
 else if(n==4||n==6||n==8||n==10||n==12)
 printf("30 days");
 else if(n==2)
 printf("28/29days");
 else
 printf("invalid input");
}

int main()
{ 
 printf("enter the number\n");
 scanf("%d",&n);
 month();
}
