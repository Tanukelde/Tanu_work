//print all negative element in an array
#include<stdio.h>
#define MAX_SIZE 100
int negative(int);
int a;

int main()
{
  negative(a);
}

int negative(int a)
{
  int arr[MAX_SIZE];
  int i,n;
 
  printf("enter the size of the array\n");
  scanf("%d",&n);
 
  printf("enter element in array\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
 
  printf("all negetive element are ");
  for(i=0;i<n;i++)
  {
   if(arr[i]<0)
   {
    printf("%d\t",arr[i]);
   }
  }

}

