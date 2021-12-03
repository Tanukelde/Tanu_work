//sort a Float Array in Ascending and descending order using for loop/
#include<stdio.h>
float Array(float);
int i,j,temp,n;
float a[100];

float Array(float i)
{
 printf("Enter the element\n");
 for(i=0;i<=n;i++)
  scanf("%f",&a[i]);
  
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
    {
     temp = a[i];
     a[i]=a[j];
     a[j]=temp;
    }
   }
  } 
    printf("The number Arrenged in assending order\n");
    for(i=0;i<n;i++)
    { 
     printf("%f",a[i]);
    }
 }
int main()
{
 printf("Enter the number\n");
 scanf("%d",&n);
 Array(i);
}
 
 
