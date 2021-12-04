//voting eligiblity cheeker
#include<stdio.h>
void vote();
int n;

void vote()
{
 if(n>=18)
 printf("eligible for voting\n");
 else
 printf("not eligible for voting\n");
}

int main()
{
 printf("enter the age of the person\n");
 scanf("%d",&n);
 vote();
}
