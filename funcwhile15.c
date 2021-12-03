#include<stdio.h>
void checkprime(int);

void checkprime(int a)
{ 
 int i,flag=1;
 for(i=2;i<=a/2;i++)
 {
  if(a%i==0)
  {
   flag=0;
   break;
  }
  if(flag)		
  printf("%d\n",a);
 }
}
 int main()
 { 
  int i;
  for(i=2;i<=100;i++)
  {
  checkprime(i);
  }
 }
