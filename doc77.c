//remove duplicate items in an array
#include<stdio.h>
int duplicate(int);
int a;
int duplicate(int a)
{
 int arr[20],i,j,k,element;
 printf("enter the number of element in  array\n");
 scanf("%d",&element);
 
 printf("enter the element\n");
 for(i=0;i<element;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 for(i=0;i<element;i++)
 {
  for(j=i+1;j<element;j++)
  {
   if(arr[i]==arr[j])
   {
    for(k=j;k<element;k++)
    {
     arr[k]=arr[k+1];
    }
    element--;
    j--;
   }
  }
 }
 printf("array element after deletion of the duplicate element\n"); 
  for(i=0;i<element;i++)
  {
   printf("%d\n",arr[i]);
  }
 }
  
  int main()
  {
   duplicate(a);
  }
