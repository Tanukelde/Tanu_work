#include<stdio.h>
int main()
{
 char choice;
 float temperature;
 printf("Enter the choice\n");
 scanf("%c",&choice);
 switch(choice)
 {
 case 'c': printf("enter temperature in farhenheit\n");
           scanf("%f",&temperature);
           temperature=(temperature - 32)*5/9.0f;
           printf("temperature in celcius %f\n",temperature);
           break;
 
 case 'f': printf("enter temperature in celcius\n");
           scanf("%f",&temperature);
           temperature=(temperature*9/5.0f)+32;
           printf("temperature in farhenheit %f\n",temperature);   
           break;
       default : printf("invaild choice......please retry\n");
}

}

 

