//W.A.P to input week number and printweek day.
#include<stdio.h>
int main()
{
int n;
printf("Enter a number from 1 to 7:\t");
scanf("%d",&n);
if(n==1)
printf("\n first day of week : monday\n");
if(n==2)
printf("\n second day of week : tuesday\n");
if(n==3)
printf("\n third day of week : wednesday\n");
if(n==4)
printf("\n fourth day of week : thrusday\n");
if(n==5)
printf("\n fifth day of week : friday\n");
if(n==6)
printf("\n six day of week : saterday\n");
if(n==7)
printf("\n seventh day of week : sunday\n");
else 
if(n>7)
printf("input is invalid");
return 0;
}
