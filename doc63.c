//find the day
#include<stdio.h>
int day(int);
int n;

int day(int n)
{
 switch(n)
 {
  case 1 :printf("monday\n");break;
  case 2 :printf("tuesday\n");break;
  case 3 :printf("wednesday\n");break;
  case 4 :printf("thrusday\n");break;
  case 5 :printf("friday\n");break;
  case 6 :printf("saterday\n");break;
  case 7 :printf("sunday\n");break;
  default : printf("invalid number...please try again\n");
}
}
int main()
{
 printf("enter the week\n");
 scanf("%d",&n);
 day(n);
}

