#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;

void flood(int x,int y,int fill_color,int defaultcolor){
if(getpixel(x,y)==defaultcolor){
    putpixel(x,y,fill_color);
    flood(x+1,y,fill_color,defaultcolor);
    flood(x,y+1,fill_color,defaultcolor);
    flood(x-1,y,fill_color,defaultcolor);
    flood(x,y-1,fill_color,defaultcolor);
    flood(x+1,y+1,fill_color,defaultcolor);
    flood(x-1,y+1,fill_color,defaultcolor);
    flood(x-1,y-1,fill_color,defaultcolor);
    flood(x+1,y-1,fill_color,defaultcolor);

}



}
int main(){


    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    rectangle(50,50,250,250);
    flood(55,55,10,0);
    getch();
    closegraph();


}
