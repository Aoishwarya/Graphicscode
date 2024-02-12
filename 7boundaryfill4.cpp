#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void boundaryFill4(int x,int y,int fill_color,int boundary_fill){
int c=getpixel(x,y);
if(c!=fill_color  && c!=boundary_fill){

    putpixel(x,y,fill_color);
    boundaryFill4(x+1,y,fill_color,boundary_fill);
     boundaryFill4(x,y+1,fill_color,boundary_fill);
      boundaryFill4(x-1,y,fill_color,boundary_fill);
       boundaryFill4(x,y-1,fill_color,boundary_fill);
}


}
int main(){

  int gd = DETECT, gm;
initgraph(&gd, &gm, "");
int x=250,y=200,radius=50;
circle(x,y,radius);

boundaryFill4(x,y,5,15);
delay(1000);
getch();
closegraph();
}
