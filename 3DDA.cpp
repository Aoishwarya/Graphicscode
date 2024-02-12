#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int x1,y1,x2,y2,x,y,xin,yin,dx,dy,step;
cout<<"Enter x1 y1 x2 y2";
cin>>x1>>y1>>x2>>y2;
dx=(x2-x1);
dy=y2-y1;

if(abs(dx)>abs(dy))step=dx;
else step=dy;
xin=dx/step;
yin=dy/step;

x=x1,y=y1;

for(int i=0;i<step;i++){
    putpixel(x,y,YELLOW);
    x+=xin;
    y+=yin;

}

getch();
closegraph();

}
