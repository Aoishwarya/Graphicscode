#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    int x1=200,y1=150,x2=300,y2=250;
                int tx=50,ty=50;
                cout<<"Rectangle before translation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);

               int x3=30,y3=30,x4=70,y4=70,y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x3,y3,x4,y4);
                cout<<"After scaling"<<endl;
                setcolor(10);
                rectangle(x3*x,y3*y,x4*x,y4*y);
long x5=320,y5=350,x6=400,y6=450;
                double a;
                cout<<"Rectangle origin rotation"<<endl;
                setcolor(3);
                rectangle(x5,y5,x6,y6);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;

                long xr=x5*cos(a)-y5*sin(a);
                long yr=x5*sin(a)+y5*cos(a);
                setcolor(2);
                rectangle(x5,y5,xr,yr);
              int x7=500,y7=550,x8=600,y8=650;
                 cout<<"Rectangle before reflection"<<endl;
                 setcolor(3);

                rectangle(x7,y7,x8,y8);
cout<<"Rectangle after reflection"<<endl;
                 setcolor(5);
                 line(x7,-y7+100,x8,-y8+100);





settextstyle(3,0,2);
outtextxy(500,675,"Translation Scaling Rotation Reflection");
                getch();
                closegraph();



}
