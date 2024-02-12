
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Initial coordinates of the rectangle
    int x1 = 60, y1 = 60, x2 = 100, y2 = 150;

    // Draw a blue rectangle
    setcolor(BLUE);
    rectangle(x1, y1, x2, y2);

    // Apply transformations
    for (int i = 0; i < 360; ++i) {
        cleardevice(); // Clear screen

        // Draw the rectangle
        setcolor(BLUE);
        rectangle(x1, y1, x2, y2);

        delay(10); // Delay to control animation speed

        // Rotate the rectangle by 1 degree clockwise around its center
        int centerX = (x1 + x2) / 2;
        int centerY = (y1 + y2) / 2;
          //x'=Px+(x-px)cosO-(y-py)sinO;
                //y'=Py+(x-px)sinO+(y-py)cosO;
        int newX1 = (x1 - centerX) * cos(1 * M_PI / 180) - (y1 - centerY) * sin(1 * M_PI / 180) + centerX;
        int newY1 = (x1 - centerX) * sin(1 * M_PI / 180) + (y1 - centerY) * cos(1 * M_PI / 180) + centerY;
        int newX2 = (x2 - centerX) * cos(1 * M_PI / 180) - (y2 - centerY) * sin(1 * M_PI / 180) + centerX;
        int newY2 = (x2 - centerX) * sin(1 * M_PI / 180) + (y2 - centerY) * cos(1 * M_PI / 180) + centerY;
        x1 = newX1;
        y1 = newY1;
        x2 = newX2;
        y2 = newY2;

        // Scale the rectangle by 1% around its center
         //x'=Px+(x-px)*Sx;
                //y'=Py+(y-py)*Sy;
        x1 = centerX + (x1 - centerX) * 1.01;
        y1 = centerY + (y1 - centerY) * 1.01;
        x2 = centerX + (x2 - centerX) * 1.01;
        y2 = centerY + (y2 - centerY) * 1.01;

        // Translate the rectangle by 1 pixel to the right
        x1 += 1;
        x2 += 1;
    }

    getch();
    closegraph();
    return 0;
}
