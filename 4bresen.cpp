#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){


 int gd=DELETE,gm;

 initgraph(&gd,&gm,"");

 int x1,y1,x2,y2,dx,dy,p,x,y;
 cout<<"Enter x1 y1 x2 y2";
 cin>>x1>>y1>>x2>>y2;
 dx=x2-x1;
 dy=y2-y1;
 x=x1,y=y1;
 p=2*dy-dx;
 while(x<=x2){
    if(p>=0){
        putpixel(x,y,YELLOW);
        y++;
        p+=2*(dy-dx);
    }
    else{
        putpixel(x,y,YELLOW);

        p+=2*dy;
    }
    x++;
 }
 getch();
 closegraph();


 }
