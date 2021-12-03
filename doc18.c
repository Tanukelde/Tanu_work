//character is alphabate or not
#include<stdio.h>
void alphabate();
char ch;
void alphabate()
{
  if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
  printf("the enter character %c is an alphabet",ch);
  else
  printf("the enter character %c is not an alphabet",ch);
}
int main()
{
 printf("enter a charater\n");
 scanf("%c",&ch);
 alphabate();
}
