#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void drawCircle(int xc,int yc,int x,int y){
putpixel(x+xc,y+yc,RED);
putpixel(x+xc,-y+yc,RED);
putpixel(-x+xc,-y+yc,RED);
putpixel(-x+xc,y+yc,RED);

putpixel(y+xc,x+yc,RED);
putpixel(y+xc,-x+yc,RED);
putpixel(-y+xc,-x+yc,RED);
putpixel(-y+xc,x+yc,RED);


}
void circleBres(int xc,int yc,int r){

int x=0,y=r;
int p=3-2*r;
while(x<=y){
    x++;

    if(p>=0){
        y--;
        p+=4*(x-y)+10;

    }
    else{
        p+=4*x+6;

    }
    drawCircle(xc,yc,x,y);
}


}
int main(){


 int gd=DELETE,gm;

 initgraph(&gd,&gm,"");

 int xc,yc,r;
 cout<<"Enter xc,yc,r :";
 cin>>xc>>yc>>r;
 circleBres(xc,yc,r);
 getch();

}
