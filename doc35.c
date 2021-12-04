//the date is correct or not
#include<stdio.h>
void date();
int dd,mm,yy;

void date()
{
 if(yy>=1999 && yy<=9999)
  {
   if(mm>=1 && mm<=12)
    {
     if((dd>=1&&dd<=31) && (mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==9)||(mm==11))
       printf("date is valid\n");
      else if((dd>=1&&dd<=30) && (mm==4)||(mm==6)||(mm==8)||(mm==10)||(mm==12))
       printf("date is valid\n");
      else if((dd>=1&&dd<=28) && (mm==2))
       printf("date is valid\n");
     else
     printf("day is not valid\n");
    }
   else
   {
   printf("Month is not valid\n");
   }
  }
  else
  printf("Year is not valid\n");  
 }  



int main()
{
 printf("Enter the year\n");
 scanf("%d",&yy);
 printf("Enter the month\n");
 scanf("%d",&mm);
 printf("Enter the date\n");
 scanf("%d",&dd);
 date();
}
