#include<stdio.h>
int main()
{
  int i,j,n,space ,number;
  char choice;
  do
  {
   printf("please Enter number\n");
   scanf("%d",&number);
   getchar();
   switch(number)
    {
     case 0:for(i=1;i<=5;i++)
              { 
               for(j=1;j<=5;j++)
               {
               if(i==1||j==1||j==5||i==5)     
               printf("*");
               else
               printf(" ");
               }
               printf("\n");
               }
               break;
     case 1: for(i=1;i<=5;i++)
              { 
               for(j=1;j<=5;j++)
               {
               if(j==3||i==5||j==4-i)     
               printf("*");
               else
               printf(" ");
               }
               printf("\n");
               }
               break;
       case 2: for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||i==3||i==5||j==5&&i<=3||j==1&&i>=3)     
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
       case 3: for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||i==3||i==5||j==5)     
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 4:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(j==5||i==3||j==1&&i<=3)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 5:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||i==3||i==5||j==1&&i<=3||j==5&&i>=3)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 6:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||j==1||i==5||i==3||j==5&&i>=3)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 7:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||j==6-i)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 8:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||i==5||i==3||j==1||j==5)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 9:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(i==1||j==5||i==5||i==3||j==1&&i<=3)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        case 10:for(i=1;i<=5;i++)
                { 
                 for(j=1;j<=5;j++)
                 {
                 if(j==1||j==3||j==5||i==1&&j>=3||i==5&&j>=3)    
                 printf("*");
                 else
                 printf(" ");
                 }
                 printf("\n");
                 }
                 break;
        }
        printf("do you want to continue(Y/N)\n");
        scanf("%c",&choice);
        getchar();
      }while(choice=='Y'||choice=='y');
               
   return 0;
   }
