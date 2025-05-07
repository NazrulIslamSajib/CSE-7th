#include <graphics.h>
#include <conio.h>
void boundaryFill(int x, int y, int fill_color, int boundary_color) {
 int current = getpixel(x, y);
 if (current != boundary_color && current != fill_color) {
 putpixel(x, y, fill_color);
 boundaryFill(x+1, y, fill_color, boundary_color);
 boundaryFill(x-1, y, fill_color, boundary_color);
 boundaryFill(x, y+1, fill_color, boundary_color);
 boundaryFill(x, y-1, fill_color, boundary_color);
 }
}
int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");
 rectangle(100, 100, 300, 300); // Create a boundary
 boundaryFill(150, 150, RED, WHITE);
 getch();
 closegraph();
 return 0;
}
