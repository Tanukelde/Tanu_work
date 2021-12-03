#include<stdio.h>
void data();

void data()
{
  int i,j,k;
  for(i='A';i<='E';i++)
   {
    for(j='A';j<=i;j++)
    printf("%c",j);
    for(k=j-2;k>='A';k--)
    printf("%c",k);
    printf("\n");
   }
}
int main()
{
 data();
}
