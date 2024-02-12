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
 cout<<"Angle of rotation:";double a;
                cin>>a;
                a=(a*3.14)/180;

  line(  x1*cos(a)-y1*sin(a),x1*sin(a)+y1*cos(a),  x2*cos(a)-y2*sin(a),x2*sin(a)+y2*cos(a));
                 line(  x2*cos(a)-y2*sin(a),x2*sin(a)+y2*cos(a),  x3*cos(a)-y3*sin(a),x3*sin(a)+y3*cos(a));
                 line(   x3*cos(a)-y3*sin(a),x3*sin(a)+y3*cos(a),x1*cos(a)-y1*sin(a),x1*sin(a)+y1*cos(a));



 getch();

                 closegraph();}
