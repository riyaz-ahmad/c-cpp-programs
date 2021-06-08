#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm;
clrscr();
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

while(!kbhit())
{
for(int k=0;k<501;k++)
{
int x = rand()%getmaxx();
int y = rand()%getmaxy();
putpixel(x,y,15);
}
delay(200);
cleardevice();
}
getch();
closegraph();
}