#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
int i;
for(i=0;i<300;i++)
   {sound(7);
   setcolor(1);
   clrscr();
   circle(110+i,370,40);
   circle(240+i,370,40);
   line(110+i,370,240+i,370);
   circle(175+i,370,10);


   delay(10);
   nosound();
   }
getch();
closegraph();
}