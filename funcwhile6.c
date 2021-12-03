#include<stdio.h>
void printsum(int);
int n,i=1,s=0;
void printsum(int n)
{
 while(i<=n)
 {
  s=s+i;
  i++;
 }
 printf("%d",s);
}
int main()
{
 printf("enter the number\n");
 scanf("%d",&n);
 printsum(n);
} 
