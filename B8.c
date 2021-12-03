//W.A.P to check the traingle valid or not .
#include<stdio.h>
int main()
{
int angle1, angle2 ,angle3, sum;
printf("enter three angles of traingle :\n");
scanf("%d%d%d",&angle1,&angle2,&angle3);

sum = (angle1 + angle2 + angle3);

if(sum==180 && angle1>0 && angle2>0 && angle3>0)
printf("traingle is valid");
else 
printf("trsingle is not valid");

return 0;
}
