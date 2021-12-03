//leap year
#include<stdio.h>
int main()
{
  int n;
 
  printf("enter year\n");
  scanf("%d",&n);
  
  if(n%4==0)
  printf("leap year\n");
  else
  printf("year is a not leap year");
}
