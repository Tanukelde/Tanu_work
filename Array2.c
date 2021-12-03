#include<stdio.h>
int main()
{
 int i,j,a,n,arr[50];
 printf("enter the value of N\n");
 scanf("%d",&n);
 printf("enter the element\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[i]>arr[j])
   {
   a=arr[i];
   arr[i]=arr[j];
   arr[j]=a;
   }
  }
 }
 printf("\n the number is arrange in ascending order\n");
 for(i=0;i<n;i++)
  printf("%d\n",arr[i]);
return 0;
}
