//check string is palindrom or not using for loop
#include<stdio.h>
#include<string.h>
void palindrom();

void palindrom()
{
  int i,length;
  char string1[20];
  int flag=0;
  printf("enter a string\n");
  scanf("%s",&string1);
  length=strlen(string1);
  
  for(i=0;i<length;i++)
  {
   if(string1[i] != string1[length-i-1])
   {
    flag =1;
    break;
   }
  }
   if(flag)
   printf("string is not palindrom");
   else
   printf("string is palindrom");
}
int main()
{
 palindrom();
}
 
