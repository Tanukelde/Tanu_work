#include<stdio.h>
#include<graphics.h>
void arc(int xc, int yc, int stangle, int endangle,int radius);
void initgraph(int *graphdriver,int*graphmode, char*pathtdriver);
void main()
{
  int gd=DETECT,gn,x=85,y=90,r=50,i;
  initgraph(&gd,&gn,"D:\\TC\\BGI");
  for(i=310;i>120;i--)
  {
   cleardevice();
   setcolor(RED);
   line(110,400,110,120);
   line(140,400,140,120);
   setcolor(GREEN);
   arc(x,y,45,135,r);
   arc(x+50,y,45,135,r);
   arc(x+100,y,45,135,r);
   arc(x,y,135,225,r);
   //arc(x+50,y,135+90,225,90,r);
   arc(x,y,120+50,225+90,r);
  // arc(x+100,y,135,90,225,90,r);
   arc(x+50,y,200,45,r);
   setcolor(YELLOW);
   circle(160,i,10);
   line(160,i+10,160,i+60);
   line(160,i+45,140,i+55);
   line(160,i+25,140,i+35);
   delay(50);
   if(kbhit())
   break;
  }
  getch();
 }
