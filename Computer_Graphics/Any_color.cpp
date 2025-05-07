#include <graphics.h>
#include <conio.h>
#include <iostream> // For potential error output (though not strictly needed here)

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

   
    // Filling a circle
    setcolor(WHITE);
    circle(200, 200, 50); // Draw circle
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 200, WHITE); // Fill inside

    // Filling a polygon
    int points[] = {300, 100, 400, 150, 350, 200, 300, 150, 300, 100};
    int numPoints = sizeof(points) / sizeof(int) / 2; // Calculate number of points
    setcolor(WHITE);
    drawpoly(numPoints, points); // Draw polygon
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 150, WHITE); // Fill inside

    getch();
    closegraph();
    return 0;
}
