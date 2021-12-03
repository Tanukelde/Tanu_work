#include<stdio.h> 
#include<curses.h>
#include<dos.h>
#include <time.h>
#include<stdlib.h>

/*void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}*/

main()
{
 int sub1,sub2,sub3,i,RED,Mark;
 char username[30],usernamech[]={"chetan"};
 char pass[20],passch[]={"chetan"};
 char name[60],sem[7];
 int v,v1;
 int roll_no,a[9],pos=10,p1=0;
 int mark[7],total=0;
 float avg;

 //clrscr();
 textcolor(RED+128);
 gotoxy(30,4);
 cprintf("Welcome tp university");
 for(i=25;i<=55;i++)
  {
	textcolor(10);
	gotoxy(i,9);
	putch(219);
  }
  for(i=9;i<=18;i++)
    {
	gotoxy(25,i);
	putch(219);
    }
     for(i=25;i<=55;i++)
     {
	textcolor(10);
	gotoxy(i,18);
	putch(219);
     }
      for (i=9;i<=18;i++)
      {
	gotoxy(55,i);
	putch(219);
      }
       for (i=9;i<=18;i++)
       {
	gotoxy(25,i);
	putch(219);
       }
   gotoxy(30,12);
   printf("username..................");
   printf("...........................");
   gotoxy(30,13);
   printf("password...........");
   gotoxy(41,13);
   printf("....................");
   gotoxy(41,12);
   for(i=26;i<=53;i++)
    {
	gotoxy(i,16);
	printf("||");
     }
   gotoxy(41,12);
   scanf("%s",&username );
   gotoxy(41,13);
   pass[0]=getch();
   printf("*");
   pass[1]=getch();
   printf("*");
   pass[2]=getch();
   printf("*");
   pass[3]=getch();
   printf("*");
   pass[4]=getch();
   printf("*");
   pass[5]=getch();
   printf("*");
   pass[6]='\0';
   for(i=26;i<55;i++)
    {
     gotoxy(i,16);
     putch(219);
     delay(60);
    }
  v=strcmp(passch,pass);
  if(v==0&&v1==0)
  {
    gotoxy(30,20);
    delay(200);
    printf("log in successfully");
    for(i=15;i<=500;i++)
    {
     sound(i*65);
     delay(20);
     nosound();
    }
    clrscr();
    for(i=25;i<=55;i++)
    {
      textcolor(10);
      gotoxy(i,9);
      putch(219);
    }
    for(i=9;i<=18;i++)
    { 
     gotoxy(25,i);
     putch(219);
    }
    for(i=25;i<=55;i++)
    {
     textcolor(10);
     gotoxy(i,18);
     putch(219);
    }
    for(i=9;i<=18;i++)
    {
     gotoxy(55,i);
     putch(219);
    }
    for(i=9;i<=18;i++)
    {
     gotoxy(25,i);
     putch(219);
    }
    gotoxy(27,11);
    printf("Enter name............");
    gotoxy(41,11);
    printf(".......................");
    gotoxy(41,11);
    gets(name);
    fflush(stdin);
    gotoxy(27,12);
    printf("Enter roll no............");
    gotoxy(42,12);
    printf("..................");
    gotoxy(27,13);
    printf("Enter sem:-");
    gotoxy(42,13);
    printf("...........................");
    gotoxy(42,11);
    scanf("%s",&name);
    gotoxy(42,12);
    scanf("%s",&roll_no);
    gotoxy(42,13);
    scanf("%s",&sem);
    delay(200);
    clrscr();
    gotoxy(30,3);
    printf("Maksheet 0f");
    gotoxy(32,4);
    printf("University");
    gotoxy(1,5);
    for(i=0;i<=80;i++)
    {
     gotoxy(i,5);
     printf("_");
    }
    
    printf("Name:-");
    gotoxy(7,6);
    printf("%s",name);
    gotoxy(25,6);
    printf("Roll_no:-");
    gotoxy(34,6);
    printf("%d",roll_no);
    gotoxy(57,6);
    printf("Semester:-");
    gotoxy(67,6);
    printf(sem);
    for(i=1;i<=80;i++) 
    {
      gotoxy(i,7);
      printf("_");
    }
    gotoxy(0,7);
    printf("Subjects");
    for(i=8;i<=22;i++) 
    {
     gotoxy(20,i);
     printf("|");
    }
    gotoxy(23,8);
    printf("Min Marks");
    for(i=8;i<=22;i++) 
    {
     gotoxy(33,i);
     printf("|");
    }
    gotoxy(37,8);
    printf("Obtain Mark");
    for(i=1;i<=80;i++)
    {
     gotoxy(i,9);
     printf("_");
    }
    gotoxy(1,10);
    printf("ADS");
    gotoxy(1,12);
    printf("DM 4");
    gotoxy(1,14);
    printf("TOC");
    gotoxy(1,16);
    printf("CE");
    gotoxy(1,18);
    printf("CAO");
    gotoxy(1,20);
    for(i=1;i<=80;i++)
    {
      gotoxy(1,20);
      printf("_");
    }
    gotoxy(1,20);
    printf("Total");
    for(i=1;i<=80;i++) 
    {
     gotoxy(i,21);
     printf("_");
    }
    printf("Average");
    for(i=1;i<=80;i++) 
    {
     gotoxy(i,23);
     printf("_");
    }     
    gotoxy(25,10);
    printf("40");
    gotoxy(25,12);
    printf("40");
    gotoxy(25,14);
    printf("40");
    gotoxy(25,16);
    printf("40");
    gotoxy(25,18);
    printf("40");
    gotoxy(25,20);
    printf("200");
    for(i=1;i<=5;i++)
    {
     gotoxy(40,pos);
     scanf("%d",&mark[i]);
     pos=pos+2;
    }
    for(i=1;i<=5;i++)
    {
      if(mark[i]>=40) 
      {
        p1++;
      }
    }
    if(p1==5)
    {
     textbackground(10); 
     textcolor(i+128);
     gotoxy(40,25);
     cprintf("Pass");
    }
    else if(p1==3||p1==4)
    {
     textbackground(10); 
     textcolor(3+128);
     gotoxy(40,25);    
     cprintf("A. T. K. T");
    }
    else
    {
     textbackground(10); 
     textcolor(4+128);
     gotoxy(40,25);    
     cprintf("Fail");
    }
    gotoxy(1,25);
    printf("Result");
    for(i=1;i<=5;i++)
    {
      total=total+mark[i];
    }
    gotoxy(40,20);
    printf("%d",total);
    avg=(float)total/500*100;
    gotoxy(40,22);
    printf("%.2f",avg);
    }
   else
   {
     textcolor(2+128);
     textbackground(12);
     gotoxy(30,20);
     cprintf("Log in unsuccessfully");
   }
   getch();
      
	
	}
