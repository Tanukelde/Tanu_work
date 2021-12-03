//Temperature conversion celcius to ferhenheit and vice versa 
#include<stdio.h>
void celcius();

void celcius()
{
 char choice;
 float temperature;
 printf("Enter the choice\n");
 scanf("%c",&choice);
 
 if((choice=='c')||(choice=='C'))
 {
  printf("enter temperature in farhenheit\n");
  scanf("%f",&temperature);
  temperature=(temperature - 32)*5/9.0f;
  printf("temperature in celcius %f\n",temperature);
 }
 else
 if((choice=='f')||(choice=='F'))
 {
  printf("enter temperature in celcius\n");
  scanf("%f",&temperature);
  temperature=(temperature*9/5.0f)+32;
  printf("temperature in farhenheit %f\n",temperature);
 }
 else
 printf("invalid choice");
} 

int main()
{
 celcius();
}
