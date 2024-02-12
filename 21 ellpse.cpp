
#include <graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");

int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
for(int rx=120,ry=60;rx>=50 || ry>=25 ;rx=rx-10,ry=ry-10){
setcolor(rx/10);
fillellipse(x,y,rx,ry);
delay(1000);
}
getch();


}
