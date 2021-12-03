#include<stdio.h>
#define MAX 5
int main()
{
 int i,pos,element,n,insert,delete;
 int a[MAX];
 for(i=0;i<MAX;i++)
  {
   printf("enter %d element\n",(i+1));
   scanf("%d",&a[i]);
  }
 
  printf("==========================\n");
  for(i=0;i<MAX;i++)
  {
  printf("%d\t",a[i]);
  }
 
  printf("\n enter an element\n ");
  scanf("%d",&element);
  for(i=0;i<MAX;i++)
   {
    if (a[i]==element)
    {
    n=1;
    break;
    }
   }
   if(n==1) 
   printf("number found\n");
   else
   printf(" number not found\n");

   printf("insert an number in array\n");
   scanf("%d",&insert); 
   printf("position of the number\n");
   scanf("%d",&pos);

   for(i=MAX-1;i>=pos-1;i--)
    {
     a[i+1]=a[i];
    }
    a[pos-1]=insert;
 
   for(i=0;i<MAX+1;i++)
   {
    printf("%d\t",a[i]);
   }
   
   printf("\nnumber want to delete\n");
   scanf("%d",&delete);
   printf("position of the number want to delete\n");
   scanf("%d",&pos);
   
   for(i=pos;i<=MAX;i++)
    {
     a[i-1]=a[i];
    }
     
   for(i=0;i<=MAX-1;i++)
   {
    printf("%d\t",a[i]);
   }
   return 0;
  }




