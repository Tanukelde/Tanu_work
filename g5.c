#include<graphics.h>
//#include<conio.h>

int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   circle(100, 100, 50);
   circle(50,50,50);
   circle(30,30,30);
   circle(10,10,10);
  
   
   getch();
   closegraph();
   return 0;
}
