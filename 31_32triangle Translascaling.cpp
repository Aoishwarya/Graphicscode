#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");

int x1=100,y1=70,x2=60,y2=60,x3=50,y3=40;

                 cout<<"triangle before Translation"<<endl;
                 setcolor(3);

                 line(x1,y1,x2,y2);
                 line(x2,y2,x3,y3);
                 line(x3,y3,x1,y1);
cout<<"triangle after translation"<<endl;
int tx,ty;
cout<<"tx ty:"<<endl;
cin>>tx>>ty;
                 setcolor(5);
                 line(x1+tx,y1+ty,x2+tx,y2+ty);
                 line(x2+tx,y2+ty,x3+tx,y3+ty);
                 line(x3+tx,y3+ty,x1+tx,y1+ty);

                 cout<<"triangle before scaling"<<endl;
                 setcolor(3);
int x4=100,y4=70,x5=60,y5=60,x6=50,y6=40;
                 line(x4,y4,x5,y5);
                 line(x5,y5,x6,y6);
                 line(x6,y6,x4,y4);
cout<<"triangle after scaling"<<endl;
int x,y;
cout<<"x y:"<<endl;
cin>>x>>y;
                 setcolor(5);
                 line(x4*x,y4*y,x5*x,y5*y);
                 line(x5*x,y5*y,x6*x,y6*y);
                 line(x6*x,y6*y,x4*x,y4*y);


                 getch();

                 closegraph();}
