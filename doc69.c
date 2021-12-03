//print total number of day in a month using switch case
#include<stdio.h>
void day();
int month;

void day()
{
 printf("enter the month\n");
 scanf("%d",&month);

 switch(month)
 {
  case 1: 
           printf("31 days");
           break;
  case 2:  
          printf("28/29 days");
          break;
  case 3: 
          printf("31 days");
          break;
          
  case 4:
          printf("30 days");
          break;
          
  case 5: 
          printf("31 days");
          break;
          
  case 6: 
          printf("30 days");
          break;
          
  case 7: 
          printf("31 days");
          break;
          
  case 8:
          printf("30 days");
          break;
          
  case 9:
         printf("31 days");
         break;
         
 case 10:
          printf("30 days");
          break;
          
 case 11: 
          printf("31 days");
          break;
        
 case 12:
          printf("30 days");
          break;
                  
 default : printf("invalid input");
 }
}
int main()
{ 
  day();
}
