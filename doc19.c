//uppercase,lowercase,specialcharater,digits
#include<stdio.h>
void special();
char ch;

void special()
{
 if(ch>='A'&&ch<='Z')
 printf("upper case");
 else 
 if(ch>='a'&&ch<='z')
 printf("lower case");
 else
 if(i>=1&&i<=9)
 printf("digits");
 else
 printf("the special character"); 
}
 
int main()
{
 printf("enter the character\n");
 scanf("%c\n",ch);
 special();
}
  
