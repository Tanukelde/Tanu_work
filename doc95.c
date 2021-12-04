//sum of all array element - using recursion 
#include<stdio.h>
#include<string.h>
void sum(int[],int);
static int sum1=0;

int main()
{
 int arr[20],n;
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the element of array\n");
 
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 sum(arr,n);
 printf("%d",sum1);
}

void sum(int arr[],int n)
{
 if(n<0)
 return;
 sum1=arr[n]+sum1;
 sum(arr,--n);
} 

