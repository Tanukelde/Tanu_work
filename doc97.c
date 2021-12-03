//get the second largest element in an array
#include<stdio.h>
int large(int);

int large(int b)
{
 int a[100],n,l1=0,l2=0,i;
 printf("enter the size of array\n");
 scanf("%d",&n);
 
 printf("enter the element \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]>l1)
  {
   l2=l1;
   l1=a[i];
  }
  else if(a[i]>l2&&a[i]<l1)
  {
   l2=a[i];
  }
 }
 printf("second largest value is%d\n",l2);
}
int main()
{
 int b;
 large(b);
}
