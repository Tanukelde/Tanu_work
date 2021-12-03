//print multiplication Table using for loop
#include<stdio.h>
int Table(int);
int n,i,a;

int Table (int a)
{
 for(i=1;i<=10;i++)
 {
  printf("%d*%d = %d\n",n,i,n*i);
 }
}

int main()
{
 printf("Enter an integer\n");
 scanf("%d",&n);
 Table(a);
}
