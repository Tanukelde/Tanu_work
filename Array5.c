#include<stdio.h>
int main()
{
 int n,i,arr[100],temp,j,index;
 printf("enter the number\n");
 scanf("%d",&n);
  for(index=0;index<n;index++)
 {
  printf("\nenter the element%d\n",index+1);
  scanf("%d",&arr[index]);
 }
 printf("original number is \t\n");
 for(index=0;index<n;index++)
 printf("%d",arr[index]);
 for(i=0,j=n-1;i<j;i++,j--)
 {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 printf("\nreverse data is\t\n");
 for(i=0;i<n;i++)
 printf("%d\n",arr[i]);
return 0;
}
