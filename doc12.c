//area of circle
#include<stdio.h>
float circle(float);
float redius,area;
int i;

float circle(float i)
{
 area=redius*redius*3.14;
 printf("Area of Circle: %.2f",area);
}
int main()
{
 printf("enter the redius\n");
 scanf("%f",&redius);
 circle(i);
}
