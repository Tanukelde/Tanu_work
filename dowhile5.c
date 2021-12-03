#include<stdio.h>
int main()
{
int i,n;
i=1;
printf("enter the number\n");
scanf("%d",&n);
do{
   
  printf("%d\n",i*2);
 
  i++;
 }
   while(i<=n);
return 0;
}
