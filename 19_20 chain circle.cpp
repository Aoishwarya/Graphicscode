#include <graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");

int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
for(int r=20;r<=120;r=r+10){
setcolor(r/10);
circle(x,y,r);}
getch();


}

