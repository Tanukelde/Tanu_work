#include<stdio.h>
int  main()
{
int a,b;
char choice;
printf("press + for addition\n");
printf("press > for greater number\n");
printf("press = for checking equality\n");

printf("enter 2 number\n");
scanf("%d%d",&a,&b);
scanf("%c",&choice);
printf("please enter your choice\n");
scanf("%c",&choice);
if(choice =='+')
printf("addition of 2 number%d",a+b);
else if(choice =='=')
printf("checking equality%d",a=b);
else if(choice =='>')
printf("greater number%d",a>b);

return 0;
}
