#include <graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
for(int i=0;i<=1000;i++){

circle(100+i,250,50);
delay(50);
cleardevice();}
getch();


}
