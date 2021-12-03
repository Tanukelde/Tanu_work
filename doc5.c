//simple interest
#include<stdio.h>
void SIinterest(int);
float si,time,rate,principal,n;

void SIinterest(int n)
{
 si=(principal*time*rate)/100;
 printf("simple interest : %.2f",si);
}

int main()
{
 printf("enter the principal\n");
 scanf("%f",&principal);
 printf("enter the time period in year\n");
 scanf("%f",&time);
 printf("enter the rate of interest\n");
 scanf("%f",&rate);
 SIinterest(n);
}
 
