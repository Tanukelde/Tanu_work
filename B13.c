//W.A.P. to convert temperature from fahrenheit to celcius and celcius to fahrenheit.
#include<stdio.h>
int main()
{
float temperature;
char choice;
printf("enter choice(C/F)\n");
scanf("%c",&choice);
if (choice == 'c'|| choice == 'C')
{
printf("enter temperature in fahrenheit\n");
scanf("%f",&temperature);
temperature = (temperature-32)*5/9.0f;
printf("temperature is celcius : %f\n",temperature);
}
else if (choice =='f' || choice == 'F'){
printf("enter temperature in celcius\n");
scanf("%f",&temperature);
temperature = (temperature*9/5.0f)+32;
printf("temperature infar : %f\n",temperature);
}
else
printf("invalid choice");
return 0;
}
