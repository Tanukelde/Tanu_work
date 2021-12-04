//print "I AM IDIOT" instead of your name using array
#include<stdio.h>

void array();
 
void array()
 {
  char ch[]="I AM AN IDIOT.";
  char c='A';
  int i=0;
  printf("Write Your Name \n\n");
  while(c)
  {
    c='A';
    //getch();
    printf("%c\a",ch[i]);
    i++;
   if(i==14)
   {
    printf(" "); 
    i=0;
   }
 }
}
int main()
{
 array();
}
