#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
int am,f,g;
cout<<"1.Central Station"<<endl<<"2.Town Hall "<<endl<<"3.Milson point"<<endl<<"4.North Sydney"<<endl;
cout<<endl<<endl<<"Enter starting point"<<endl;
cin>>f;
cout<<"Enter destination"<<endl;
cin>>g;
clrscr();
delay(100);
int h=0;
cout<<endl<<endl<<endl<<"Loading";
while(h<3)
{
  for(int j=0;j<3;j++)
  {
    cout<<".";
    delay(100);
  }h++;
  }
char a[10],b[10],x[30],y[30],z[30];
int gd=DETECT,gm;
initgraph(&gd,&gm,"../bgi");
switch(f)
{
case 1:
setcolor(5);
   outtextxy(240,153,"Central Station");
   break;
case 2:
setcolor(5);
    outtextxy(240,153,"Town Hall");
     break;
case 3:
setcolor(5);
     outtextxy(240,153,"Milson Point");
     break;
case 4:
setcolor(5);
    outtextxy(240,153,"North Sydeny");
    break;
}

switch(g)
{
case 1:
    setcolor(3);
    outtextxy(230,181,"Central Station");
    break;
case 2:
setcolor(3);
     outtextxy(230,181,"Town Hall");
     break;
case 3:
   setcolor(3);
     outtextxy(230,181,"Milson Point");
     break;
case 4:
setcolor(3);
    outtextxy(230,181,"North Sydney");
    break;
}

delay(100);
setcolor(1);
outtextxy(250,119,"BUS NO 05");
outtextxy(247,360,"Happy Journey");
/*line(200,100,400,100);
line(200,400,400,400);
line(200,100,200,400);
line(400,100,400,400);*/
rectangle(190,100,400,400);
outtextxy(200,153,"From:");
outtextxy(200,181,"To:");
outtextxy(200,219,"Date:");
outtextxy(200,257,"Time:");
outtextxy(200,295,"Distance:");

outtextxy(200,333,"Amount:");
//gets(a);
//outtextxy(240,153,a);
//gets(b);
//outtextxy(230,181,b);
//station option

setcolor(9);
if(f==1&&g==2||f==2&&g==1)
{
outtextxy(260,333,"$3");
}
else if(f==2&&g==3||f==3&&g==2)
{
outtextxy(260,333,"$9");
}
else if(f==3&&g==4||f==4&&g==3)
{

outtextxy(260,333,"$3.5");
}
  else if(f==1&&g==3||f==3&&g==1)
{

outtextxy(260,333,"$12");
}
else if(f==1&&g==4||f==4&&g==1)
{

outtextxy(260,333,"$15");
}
else if(f==2&&g==4||f==4&&g==2)
{
outtextxy(260,333,"$12");

}
if(f==1&&g==2||f==2&&g==1)
{
outtextxy(280,295,"1Km");
}
   else if(f==2&&g==3||f==3&&g==2)
{
outtextxy(280,295,"3Km");
}
 else if(f==3&&g==4||f==4&&g==3)
{
outtextxy(280,295,"1.3Km");
}
 else if(f==1&&g==3||f==3&&g==1)
{
outtextxy(280,295,"4Km");
}
else if(f==1&&g==4||f==4&&g==1)
{
outtextxy(280,295,"5Km");
}
else if(f==2&&g==4||f==4&&g==2)
{
outtextxy(280,295,"4Km");

}
///time
struct tm *ptr;
time_t t;
char str[100];
t=time(NULL);
ptr=localtime(&t);
strftime(str,100,"%I:%M:%S",ptr);
outtextxy(250,257,str);
//date
struct date d;
getdate(&d);
int k,l,m;
k=d.da_day;
l=d.da_mon;
m=d.da_year;
sprintf(x,"%d",k);
sprintf(y,"%d",l);
sprintf(z,"%d",m);
outtextxy(240,219,x);
outtextxy(260,219,"/");
outtextxy(275,219,y);
outtextxy(290,219,"/");
outtextxy(300,219,z);
getch();

}