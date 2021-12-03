#include<stdio.h>
void printnum(int,int);
void printnum(int n1,int n2)
{
 while(n1<=n2)
 {
 printf("%d\n",n1);
 n1++;
 }
}
int main()
{
 int n1,n2;
 printf("enter the number\n");
 scanf("%d",&n1);
 printf("enter the number\n");
 scanf("%d",&n2);
 printnum(n1,n2);
}
