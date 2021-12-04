//Area of triangle
#include<stdio.h>
void triangle(int);
int b,h,a;
float area;
 
void triangle(int a)
{
 area=1/2.0f*b*h;
 printf("area: %f",area);
}

int main()
{
 printf("enter the value ofb&h\n");
 scanf("%d%d",&b,&h);
 triangle(a);
}
