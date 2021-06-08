#include<stdio.h>
#include<conio.h>
#include<dos.h>
union REGS in, out;
//detecting mouse programmming and show mouse in text mode
void detect_mouse()
{
in.x.ax=0;
in.x.ax=1;
int86 (0X33,&in,&out);
if (out.x.ax == 0)
printf("\n Mouse failed to initialize");
else
printf("\nMouse was succesfully initialized");
}

//hiding mouse
void hide_mouse()
{
in.x.ax=2;
int86(0X33,&in,&out);
}

//which  button is pressed
void detect()
{
int button;
while(!kbhit())
 {
  in.x.ax=3;
  int86(0X33,&in,&out);
  button = out.x.bx&7;
  switch(button)
  {
   case 1: printf("left\n");
   break;
   case 2: printf("right\n");
   break;
   case 4: printf("middle\n");
   break;
   case 3: printf("left and right\n");
   break;
   case 5: printf("left and middle\n");
   break;
   case 6: printf("right and middle\n");
   break;
   case 7: printf("all three\n");
   break;
   default: printf("No button\n");

  }
  delay(2000);
 }
}

//position
void position()
{
while(!kbhit())
{
 int x,y;
 in.x.ax=3;
 int86(0X33,&in,&out);
 if(out.x.bx==1)
 {
 x = out.x.cx;
 y = out.x.dx;
 printf("x = %d and y = %d \n",x,y);
 }
 delay(200);
}
}

//restriction of mouse within a boundary
void restrict(int x1, int y1, int x2, int y2)
{
  in.x.ax = 7;
  in.x.cx = x1;
  in.x.dx = x2;
  int86(0X33, &in ,&out);
  in.x.ax = 8;
  in.x.cx = y1;
  in.x.cx = y2;
  int86(0X33, &in, &out);
}

void main()
{
 clrscr();
 detect_mouse();
 detect();

// restrict(300,300,500,500);
 position();

 getch();
}