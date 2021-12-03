#include<stdio.h>
#include<graphics.h>
void main()
{
  int gd = DETECT,gm;
  //clrscr();
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  
  setcolor(BLUE);
  rectangle(50,50,100,100); 
  
  setcolor(RED);
  rectangle(100,100,150,150);
  
  setcolor(YELLOW);
  rectangle(150,150,200,200);
  
  setcolor(BLUE);
  rectangle(200,200,250,250);
  
  setcolor(RED);
  rectangle(70,70,120,120);
  
  setcolor(YELLOW);
  rectangle(120,120,170,170);

  setcolor(BLUE);
  rectangle(170,170,230,230);
  
  setcolor(RED);
  rectangle(230,230,270,270);
  
  setcolor(YELLOW);
  rectangle(90,90,140,140);
  
  setcolor(RED);
  line(200,200,250,250);
  
  setcolor(BLUE);
  line(100,100,150,150);
  
  setcolor(RED);
  line(150,150,200,200);
  
  setcolor(BLUE);
  line(230,230,270,270);  
  
  setcolor(RED);
  line(50,50,100,100);
  
  
  getch();
  closegraph();
}
