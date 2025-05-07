#include <graphics.h>
#include <iostream>
#include <cmath> // For abs()

void drawCirclePoints(int xc, int yc, int x, int y, int color) {
    putpixel(xc + x, yc + y, color);
    putpixel(xc - x, yc + y, color);
    putpixel(xc + x, yc - y, color);
    putpixel(xc - x, yc - y, color);
    putpixel(xc + y, yc + x, color);
    putpixel(xc - y, yc + x, color);
    putpixel(xc + y, yc - x, color);
    putpixel(xc - y, yc - x, color);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics driver

    int xc, yc, r;

    std::cout << "Enter the center coordinates (xc yc): ";
    std::cin >> xc >> yc;
    std::cout << "Enter the radius (r): ";
    std::cin >> r;

    int x = 0, y = r;
    int d = 1 - r; // Initial decision parameter
    int color = WHITE;

    drawCirclePoints(xc, yc, x, y, color);

    while (y > x) {
        if (d < 0) {
            d = d + 2 * x + 3;
        } else {
            d = d + 2 * (x - y) + 5;
            y--;
        }
        x++;
        drawCirclePoints(xc, yc, x, y, color);
    }

    getch();
    closegraph();
    return 0;
}
