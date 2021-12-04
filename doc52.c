//print a calender taking input from user using loop
#include<stdio.h>
#include<stdlib.h>
void calender();
int i,j,k,day,dt=1;
 
void calender()
{  
  do
   {  
     j=k;
     printf("\t");
     j--;
    }
     while(j>0)
    if(k!=0)
     {
       if(k%7==0)
       printf("\n");
     }
      while(dt<=day)
    printf("%d\t",dt);
        dt++;
        k++;
     }
}  
int main()
 {
    printf("C Program to Print a Calendar With Start With Input Day\n\n");
    
    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d",&day);
    
    printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d",&k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf(" _________________________________________________\n\n");
    calender();
}
  
