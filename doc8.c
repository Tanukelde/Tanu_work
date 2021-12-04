//W.A.P. to convert temperature from fahrenheit to celcius and celcius to fahrenheit.
#include<stdio.h>
float celcius(float);
float temperature;
char choice,a;

float celcius(float a)
{
 if (choice == 'c'|| choice == 'C')
 {
 printf("enter temperature in fahrenheit\n");
 scanf("%f",&temperature);
 temperature = (temperature-32)*5/9.0f;
 printf("temperature is celcius : %f\n",temperature);
 }
 else if (choice =='f' || choice == 'F')
 {
 printf("enter temperature in celcius\n");
 scanf("%f",&temperature);
 temperature = (temperature*9/5.0f)+32;
 printf("temperature infar : %f\n",temperature);
 }
 else
 printf("invalid choice");
}
int main()
{ 
 printf("enter choice(C/F)\n");
 scanf("%c",&choice);
 celcius(a);
}
