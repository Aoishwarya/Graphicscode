#include<graphics.h>
#include<iostream>
using namespace std;
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int x1,y1,x2,y2;
cout<<"Enter x1,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
int m=(y2-y1)/(x2-x1);
int c=y1-(m*x1);
int x=x1;
int y=y1;
if(abs(m)<=1){
        while(x<=x2){
    putpixel(x,y,BLUE);
    x++;
    y=m*x+c;
        }
}

else{
    while(y<=y2){
    putpixel(x,y,BLUE);
    y++;
    x=(y-c)/m;
        }
}
getch();
closegraph();
}
