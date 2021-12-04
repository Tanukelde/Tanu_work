//delete element from array at desired or specific position
#include<stdio.h>
int insertarray(int);
int k;

int insertarray(int k)
{
   int i,pos,element,delete;
   int a[100];
   printf("\n enter an element\n ");
   scanf("%d",&element);
    
    for(i=0;i<element;i++)
    {
      printf("enter %d element\n",(i+1));
      scanf("%d",&a[i]);
    }
 
    printf("==========================\n");
    for(i=0;i<element;i++)
    {
     printf("%d\t",a[i]);
    }
   
   printf("\nnumber want to delete\n");
   scanf("%d",&delete);
   printf("position of the number want to delete\n");
   scanf("%d",&pos);
   
   for(i=pos;i<=element;i++)
    {
     a[i-1]=a[i];
    }
     
   for(i=0;i<element-1;i++)
   {
    printf("%d\t",a[i]);
   }
  }
 int main()
 {
  insertarray(k);
 }
