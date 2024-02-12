#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                cout<<"Before fixed scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                 //x'=Px+(x-px)*Sx;
                //y'=Py+(y-py)*Sy;
                int xr1=x1+(x*(x2-x1));
                int yr1=y1+((y2-x1)*y);
                cout<<"After fixed scaling"<<endl;
                setcolor(10);
                rectangle(x1,y1,xr1,yr1);

                long x3=200,y3=200,x4=300,y4=300;
                double a;
                cout<<"Rectangle with Fixed point rotation"<<endl;
                setcolor(3);
                rectangle(x3,y3,x4,y4);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;
                //x'=Px+(x-px)cosO-(y-py)sinO;
                //y'=Py+(x-px)sinO+(y-py)cosO;
                long xr=x3+((x4-x3)*cos(a)-(y4-y3)*sin(a));
                long yr=y3+((x4-x3)*sin(a)+(y4-y3)*cos(a));
                setcolor(2);
                rectangle(x1,y1,xr,yr);
                getch();
                closegraph();
}
