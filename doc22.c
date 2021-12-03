//leap year
#include<stdio.h>
void leap();
int n;

void leap()
{
  if(n%4==0)
  printf("leap year\n");
  else
  printf("year is a not leap year");
}
int main()
{
 printf("enter year\n");
 scanf("%d",&n);
 leap();
}
