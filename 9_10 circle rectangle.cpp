#include <graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
//setcolor(5);
printf("Rectangle");
rectangle(100,200,400,500);
setfillstyle(SOLID_FILL,BLUE);
   floodfill(110,210,WHITE);
printf("Circle");
circle(150,150,25);
setfillstyle(SOLID_FILL,BLUE);
   floodfill(150,160,WHITE);
getch();
closegraph();
}
