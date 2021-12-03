#include<stdio.h>
int main()
{
 int a[100],i,n,min,max;
 printf("enter the element\n");
 scanf("%d",&n);
 
 printf("enter the element\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 min=max=a[0];
 for(i=1;i<n;i++)
 {
  if(min>a[i])
  min=a[i];
  if(max<a[i])
  max=a[i];
 }
 printf("minimum of array%d\n",min);
 printf("maximum of array%d\n",max);
 
return 0;
}
