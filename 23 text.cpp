#include <graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");


setcolor(BLUE);
setbkcolor(GREEN);
settextstyle(3,0,2);
outtextxy(200,375,"Puja");
setcolor(RED);
setbkcolor(YELLOW);
outtextxy(100,275,"Aoishi");

        getch();


}
