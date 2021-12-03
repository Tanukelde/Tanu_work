//W.A.P to check whether the traingle is eqilateral,scalene,or isosceles.
#include<stdio.h>
void traingle();
int side1,side2,side3;

void traingle()
{
 if(side1==side2&&side2==side3)
 printf("the given traingle is eqilateral\n");

 else if (side1==side2||side2==side3||side3==side1)
 printf("the given traingle is isosceles\n");

 else
 printf("the given traingle is scalene\n");
}
int main()
{
  printf("Enter side of traingle\n");
  scanf("%d%d%d",&side1,&side2,&side3);
  traingle();
}
