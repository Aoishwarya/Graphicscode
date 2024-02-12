#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"");
putpixel(100,200,YELLOW);
getch();
closegraph();



}
