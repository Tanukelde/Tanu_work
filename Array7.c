#include<stdio.h>
int main()
{
  int n,i,j,temp,a[100];
  printf("enter the number\n");
  scanf("%d",&n);
 
  printf("enter the element\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
      {
       if(a[i]>a[j])
       {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
     }
   }
       printf("the number arranged in assending order\n");
       for(i=0;i<n;i++)
       {
        printf("%d\n",a[i]);
       }
      
    
 return 0;
 }
