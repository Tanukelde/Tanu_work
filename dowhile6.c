#include<stdio.h>
int main()
{
int i,n,s=0;
i=1;
printf("enter the number\n");
scanf("%d",&n);
do{
   s=s+i;
  printf("%d\n",s);
  i++;
 }
   while(i<=n);
return 0;
}
