#include<stdio.h>
int main()
{
int i,n,s=1;
i=1;
printf("enter the number\n");
scanf("%d",&n);
do{
   
  printf("%d\n",s);
  s=s+2;
  i++;
 }
   while(i<=n);
return 0;
}
