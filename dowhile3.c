//print starting and ending point
#include<stdio.h>
int main()
{
int n1,n2;
printf("enter the starting number\n");
scanf("%d",&n1);
printf("enter the ending number\n");
scanf("%d",&n2);
do
{
  printf("%d\n",n1);
  n1++;
 }
   while(n1<=n2);
return 0;
}
