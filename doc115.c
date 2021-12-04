//Matrix Questions
//add two matrices
#include<stdio.h>
int matrix(int arr[],int prr[]);

int main()
{
 int arr,prr;
 matrix(arr,prr);
}

int matrix(int arr[],int prr[])
{
 int i,j,rowcount,columncount;
 int row[10][10],column[10][10],result[10][10];
 
 printf("number of row to be added\n");
 scanf("%d",&rowcount);
 
 printf("number of column to be added\n ");
 scanf("%d",&columncount);
 
 printf("element of first matrix\n");
 for(i=0;i<rowcount;i++)
 {
  for(j=0;j<columncount;j++)
  scanf("%d",&row[i][j]);
 }
 
 printf("element of second matrix\n");
 for(i=0;i<rowcount;i++)
 {
  for(j=0;j<columncount;j++)
  scanf("%d",&column[i][j]);
 }
 
 printf("sum of entered matrixs\n");
 for(i=0;i<rowcount;i++)
 {
  for(j=0;j<columncount;j++)
  { 
    result[i][j]=row[i][j] + column[i][j];
    printf("%d\t",result[i][j]);
  }
  printf("\n");
 }
}
  
   
  
  
  
  
  
