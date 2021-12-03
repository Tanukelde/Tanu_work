//circumference of a circle
#include<stdio.h>
void circumference(int);
float cm,r,pi=3.14;

void circumference(int r)
{
 cm=2*pi*r;
 printf("\ncircumference of circle is %.2f",cm);
}
int main()
{
 printf("enter the redius of circle\n");
 scanf("%f",&r);
 circumference(r);
}
 


