#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
union REGS i,o;

int initmouse()
{
i.x.ax=0;
//i.x.ax=1;
int86(0X33,&i,&o);
return (o.x.ax);
}
void show()
{
i.x.ax = 1;
int86(0X33, &i,&o);
}
void getpos(int *x, int *y)
{
i.x.ax=3;
int86(0X33,&i, &o);
*x = o.x.cx;
*y = o.x.dx;
}

void mouseptr(int x, int y)
{
i.x.ax = 4;
i.x.cx = x;
i.x.dx = y;
int86(0X33, &i,&o);
}
void main()
{
int gd = DETECT, gm, mx,my, rad,x,y,tempx, tempy;
rad = 100;
initgraph(&gd,&gm,"..\\bgi");
if(!initmouse())
{
closegraph();
exit(1);
}
mx = getmaxx()/2;
my = getmaxy()/2;
show();
mouseptr(mx, my);
circle(mx,my, rad);
x = tempx = mx;
y = tempy = my;
while(!kbhit())
{
  getpos(&x, &y);
  if((pow(x-mx,2)+pow(y-my,2)-pow(rad,2))>0)
  {
    mouseptr(tempx, tempy);
    x = tempx;
    y = tempy;
  }
  tempx = x;
  tempy = y;
}
closegraph();
getch();
 }