#include<stdio.h>
int main()
{
int n1,n2,i,j;
printf("enter the number\n");
scanf("%d",&n1);
printf("enter the number\n");
scanf("%d",&n2);
for(i=1;i<=n1;i++)
 {
 for(j=1;j<=n2;j++)
  { 
    printf("*");
  }
 printf("\n");
 }


return 0;
}
