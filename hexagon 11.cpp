#include <graphics.h>
#include<conio.h>
int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
setcolor(RED);
int point[]={429,134,549,206,548,355,428,431,306,356,305,206,429,134};
drawpoly(7,point);
setfillstyle(SOLID_FILL,BLUE);
floodfill(439,144,RED);

setcolor(RED);
line(160,80,240,80);
line(240,80,280,160);
line(280,160,240,240);
line(240,240,160,240);
line(160,240,120,160);
line(120,160,160,80);
setfillstyle(1,BLUE);
floodfill(170,90,RED);
getch();

}
