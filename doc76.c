//Array
//insert an element desired or specific position in an array
#include<stdio.h>
int insertarray(int);
int k;

int insertarray(int k)
{
   int i,pos,element,insert;
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

      printf("\ninsert an number in array\n");
      scanf("%d",&insert); 
      printf("\nposition of the number\n");
      scanf("%d",&pos);

      for(i=element-1;i>=pos-1;i--)
       {
        a[i+1]=a[i];
       }
       a[pos-1]=insert;
 
     for(i=0;i<element+1;i++)
     {
      printf("%d\t",a[i]);
     }
 }   
 int main()
 {
  insertarray(k);
 }
