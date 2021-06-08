//not done yet
#include<iostream.h>
#include<conio.h>
int main()
{
 int n,b=0,i,m,s=0;
 clrscr();
 cout<<"Enter litres"<<endl;
 cin>>m;
 for(i=0;i<m;i++)
 {
   cout<<"Enter n"<<endl;
   cin>>n;
   b=n/10;
   n=n%10;
   s=s+b;
   b=0;
   b=n/7;
   n=n%7;
   s=s+b;
   b=0;
   b=n/5;
   n=n%5;
   s=s+b;
   b=0;
   b=n/1;
   s=s+b;
   cout<<"ans: "<<s<<endl;
   s=b=0;
 }
  getch();
  return 0;
}