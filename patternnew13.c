#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
  {
   for(j=1;j<=9;j++)
    {
    if((j==1)||(i==1)||(i+j==9+1))
     printf("*");
    else 
    printf(" ");
    } 
    printf("\n");
}


return 0;
}
