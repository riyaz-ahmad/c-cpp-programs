#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
union REGS i,o;
int initmouse();
void show();
void hide();
void res(int x1, int y1, int x2, int y2);



void main()
{
int st, gd = DETECT, gm;
initgraph(&gd,&gm, "..\\bgi");
settextstyle(DEFAULT_FONT,0,2);
st = initmouse();
if(st == 0)
  outtext("NOt successfull");
else {
     outtext("Success");
     delay(200);
     show();
     rectangle(120,70,520,410);
     res(120,70,520,410);
   }
getch();
closegraph();
}
 int initmouse()
 {
  i.x.ax=0;
  int86(0X33,&i,&o);
  return(o.x.ax);
 }

 void show()
 {
 i.x.ax=1;
 int86(0X33,&i,&o);
 }
  void res(int x1, int y1, int x2, int y2){
  i.x.ax = 7;
  i.x.cx = x1;
  i.x.dx = x2;
  int86(0X33,&i,&o);
  i.x.ax = 8;
  i.x.cx = y1;
  i.x.dx = y2;
  int86(0X33,&i,&o);

  }






