//percantage of 5subjects
#include<stdio.h>
float per(float);
float m,e,h,p,c,total,percantage,a;
float per(float a)
{
 total=m+e+h+c+p;
 percantage=total*100/500;
 printf("%.2f",percantage);
}
int main()
{ 
 printf("enter 5subject marks\n");
 scanf("%f%f%f%f%f",&m,&e,&h,&p,&c);
 per(a);
}


