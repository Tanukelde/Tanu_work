#include<stdio.h>
int main()
{
  int n,i,peakelement=0;
  printf("enter the number\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the element\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
    if(n==1)
    {
     peakelement=1;
     break;
    }
   
    if(n==2)
    {
     if(a[0]!=a[i])
     {
     peakelement=1;
     break;
     }
    }
   else if(i==0)
   {
    if(a[i]>a[i+1])
    {
     peakelement=1;
     break;
    }
   }
    else if(i==n-1)
   {
    if(a[i]>a[i-1])
    {
     peakelement=1;
     break;
    }
   }
    else if(a[i]>a[i-1]&&a[i]>a[i+1])
   {
     peakelement=1;
     break;
    }
   }
    if(peakelement)
    printf("1");
    else
    printf("0");
    
return 0;
}
