//W.A.P to check whether a charater is an alphabet or not.
#include<stdio.h>
int main()
{
char ch;
printf("enter a charater\n");
scanf("%c",&ch);

if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
printf("the enter character %c is an alphabet",ch);
else
printf("the enter character %c is not an alphabet",ch);
return 0;
}
