//input angle of a triangle and check whether the triangle is valid or not
#include<stdio.h>
void triangle();
int angle1, angle2 ,angle3, sum;

void triangle()
{
 sum = (angle1 + angle2 + angle3);
 if(sum==180 && angle1>0 && angle2>0 && angle3>0)
 printf("traingle is valid");
 else 
 printf("trsingle is not valid");
}

int main()
{
 printf("enter three angles of traingle :\n");
 scanf("%d%d%d",&angle1,&angle2,&angle3);
 triangle();
}
