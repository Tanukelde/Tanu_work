#include<stdio.h>
void print(int);
int i=2,n;
void print(int n)
{
while(i<=n)
 {
  printf("%d\n",i);
  i=i+2;
 }
}
int main()
{
printf("enter the numebr\n");
scanf("%d",&n);
print(n);
}
