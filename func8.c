#include<stdio.h>
void pattern()
{

int i,j,space;
for(i=5;i>=1;i--)
{
 for(space=1;space<=i;space++)
 printf(" ");
    for(j=5;j>=i;j--)
    printf("*");
    
    printf("\n");
    }
  }
int main()
{
 pattern();
 
return 0;
}
