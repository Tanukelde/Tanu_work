//check whether number is positive ot negative or zero using switch case
#include<stdio.h>
void posneg();

void posneg()
{
 int number;
 printf("enter the number\n");
 scanf("%d",&number);
 
 switch(number>0) 
 {
  case 1: printf("number is positive");
          break;
          
  case 0: 
      switch(number<0)
        { 
           case 1: printf("number is negative");
                   break;
              
           case 0: printf("number is zero");
                   break;
         }
 }                   
}
int main()
{
 posneg();
}

