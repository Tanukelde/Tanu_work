#include<stdio.h>
int main()
{
int i,j,space;
for(i=1;i<=9;i++)
 {
   
  for(j=1;j<=9;j++)
  {
  if((j==9)||(i==9)||(j==9-i))
   printf("*");
   else
   printf(" ");
   }
   printf("\n");
  


}
return 0;
}
