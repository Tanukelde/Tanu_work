//input all side of a triangle and check whether the triangle is valid or not
#include<stdio.h>
void triangle();
int side1, side2 ,side3;


void triangle()
{
 
 if((side1+side2)>side3  && (side2+side3)>side1 && (side1+side3)>side2)
 {
  printf("traingle is valid");
 }
 else 
 printf("traingle is not valid");
}

int main()
{
 printf("enter all side of traingle :\n");
 scanf("%d%d%d",&side1,&side2,&side3);
 triangle();
}
