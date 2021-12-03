//convert a person's name in abbreviated
#include<stdio.h>
void abbreviated();
char fname[20],mname[20],lname[20];

void abbreviated()
{
 printf("Abbreviated name\n");
 printf("%c %c %s\n",fname[0],mname[0],lname);
}

int main()
{
 printf("Enter the first name middle name and last name\n");
 scanf("%s%s%s",fname,mname,lname);
 abbreviated();
}
