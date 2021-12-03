//read integer(N)and print the first three power(n^1,n^2,n^3)
#include<stdio.h>
#include<math.h>
int power(int);
int num,i;

int power(int i)
{
  printf("%d,%d,%d\n",num,num*num,num*num*num); 
}
int main()
{
 printf("Enter the number\n");
 scanf("%d",&num);
 power(i);
}
