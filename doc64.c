//calculator
#include<stdio.h>
int calculator(int);
char choice;
int a,b,c;

int calculator(int a)
{
 switch(choice)
 {
  case '+' : printf("enter to number :\t");
             scanf("%d%d",&a,&b);
             c=a+b;
             printf("\naddition is:\t%d\n",c);
             break;
  case '-' : printf("enter to number :\t");
             scanf("%d%d",&a,&b);
             c=a-b;
             printf("\nsubtraction is:\t%d\n",c);
             break;
  case '*' : printf("enter to number :\t");
             scanf("%d%d",&a,&b);
             c=a*b;
             printf("\nmultiplication is:\t%d\n",c);
             break;
  case '/' : printf("enter to number :\t");
             scanf("%d%d",&a,&b);
             c=a/b;
             printf("\ndivision is:\t%d\n",c);
             break;
  case '%' : printf("enter to number :\t");
             scanf("%d%d",&a,&b);
             c=a%b;
             printf("\nmodulous is:\t%d\n",c);
             break;
             
         default : printf("\ninvalid choice\n");
 }
 }





int main()
{
  printf("enter yur choice in only 5 form");
  printf("\n...........................\n");
  printf("\npress + to perform addition\n");
  printf("\npress - to perform subtraction\n");
  printf("\npress * to perform multiplication\n");
  printf("\npress % to perform modulous\n");
  printf("\npress / to perform division\n");
  scanf("%c",&choice);
  calculator(a);
}
