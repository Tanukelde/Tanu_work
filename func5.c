#include<stdio.h>
void pattern()
{
int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=15;j++)
{
if((i==1&&j<=7)||(i==9&&j>=9)||(i==j)||(j==9+i-2))
printf("*");
else
printf(" ");
}
printf("\n");
}
}
int main()
{
 pattern();
 
return 0;
}
