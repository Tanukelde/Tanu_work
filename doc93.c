//read and print element of the array -using recursion
#include<stdio.h>
#define MAX_SIZE 100
void Array(int arr[],int start,int len);

int main()
 {
   int arr[MAX_SIZE];
   int n,i;
   
   printf("enter size of the array :\n");
   scanf("%d",&n);
   printf("enter elements in the array :\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
  
   printf("element in the array:\n");
   Array(arr,0,n);
   return 0;
 }
 
 void Array(int arr[],int start,int len)
 {
  if (start>=len)
  return;
  
  printf("%d\n",arr[start]);
  
  Array(arr,start+1,len);
 }
  
