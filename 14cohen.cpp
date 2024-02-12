#include <graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

static int LEFT=1,RIGHT=2,BOTTOM=4,TOP=8,xmin,ymin,xmax,ymax;

int getcode(int x,int y){
int code=0;
if(y>ymax)code=TOP;
if(y<ymin)code=BOTTOM;
if(x<xmin)code=LEFT;
if(x>xmax)code=RIGHT;
return code;
}
int main(void)

{

   int gd = DETECT, gm;
initgraph(&gd, &gm, "");
setcolor(WHITE);
cout<<"Enter min & max value";
cin>>xmin>>ymin>>xmax>>ymax;//100 100 200 200
rectangle(xmin,ymin,xmax,ymax);
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;//150 150 200 200
line(x1,y1,x2,y2);
getch();
int ccode1=getcode(x1,y1),ccode2=getcode(x2,y2);
int accept=0;
while(1){
    float m=(float)(y2-y2)/(x2-x1);
    if(ccode1==0 && ccode2==0){
        accept=1;
        break;
    }
    else if((ccode1 & ccode2)!=0)
{
break;}
else{
    int x,y;
    int temp;
    if(ccode1==0)temp=ccode2;
    else temp=ccode1;
    if(temp & TOP){
        x=x1+(ymax-y1)/m;
        y=ymax;
    }

    else if(temp & BOTTOM){
        x=x1+(ymin-y1)/m;
        y=ymin;
    }
    else if(temp & LEFT){
        y=y1+(xmin-x1)*m;
        x=xmin;
    }
    else if(temp & RIGHT){
        y=y1+(xmax-x1)*m;
        x=xmax;
    }

    if(temp==ccode1){
        x1=x;
        y1=y;
        ccode1=getcode(x1,y1);
    }
      else{
        x2=x;
        y2=y;
        ccode2=getcode(x2,y2);
    }

}
}
cout<<"After clipping";
if(accept)cleardevice();
rectangle(xmin,ymin,xmax,ymax);
setcolor(YELLOW);
line(x1,y1,x2,y2);
getch();
closegraph();


}
