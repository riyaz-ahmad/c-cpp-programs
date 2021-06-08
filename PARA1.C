#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
float f(int x);
void main ()
{
int x, y;
//int a=4;
int gd = DETECT, gm;
initgraph(&gd,&gm,"..\\bgi");
line(300,300,300,50);
line(500,175,100,175);
putpixel(300,175,GREEN);
for(x=0;x<100;x++)
{
 y = f(x);
 putpixel(x+300, 175-y,GREEN);
 putpixel(x+300, 175+y,GREEN);
 delay(100);
}
 getch();
 closegraph();
}


float f(int x)
{
return 2*sqrt(4*x);

}