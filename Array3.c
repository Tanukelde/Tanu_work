#include<stdio.h>
int main()
{
 int i,k,size1,size2,arr[50],merg[20];
  printf("enter the size of array\n");
  scanf("%d",&size1); 
  
  printf("enter the element\n");
  int arr1[size1];
  for(i=0;i<size1;i++)
  {
   scanf("%d",&arr1[i]);
   merg[i]=arr1[i];
  }
  k=i;
  printf("enter the size of array\n");
  scanf("%d",&size2); 
  
  printf("enter the element\n");
  for(i=0;i<size2;i++)
  {
   scanf("%d",&arr[i]);
   merg[k]=arr[i];
   k++;
  }
  printf("array after merging.......\n");
  for(i=0;i<k;i++)
  {
   printf("%d",merg[i]);
  }
  return 0;
 }
  
  
  
 
 
 
 
 
 

