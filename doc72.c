//check whether number is a even or odd using switch case
#include<stdio.h>
void evenodd();

void evenodd()
{
 int num;
 printf("enter the number\n");
 scanf("%d",&num);
 
 switch(num%2)
 {
  case 0:printf("number is even");
         break;
         
  case 1:printf("number is odd");
         break;
   
  default :printf("please try again........");
 }
}
int main()
{
 evenodd();
}
