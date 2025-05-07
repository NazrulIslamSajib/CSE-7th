#include<graphics.h>
#include<conio.h>
#include<math.h> 
#include<iostream>
using namespace std; 
void drawcicle(int xc,int yc,int x,int y,int color)
{ 
    putpixel(xc + x, yc + y, color);
    putpixel(xc - x, yc + y, color);
    putpixel(xc + x, yc - y, color);
    putpixel(xc - x, yc - y, color);
    putpixel(xc + y, yc + x, color);
    putpixel(xc - y, yc + x, color);
    putpixel(xc + y, yc - x, color);
    putpixel(xc - y, yc - x, color);
}
int main()
{  
    initwindow(800,800);
    //coordinate 
    int xc,yc,r;
    cin>>xc>>yc>>r;
    int x=0,y=r; 
    int color=WHITE;
    drawcicle(xc,yc,x,y,color); 
    int d=3-2*r;  
    while(y>=x)
    { 
       x++;
       if(d>0) 
       { 
         d=d+4*(x-y)+10; 
         y--;
	   } 
	   else 
	   { 
	     d=d+4*x+6;
	   } 
	   drawcicle(xc,yc,x,y,color);
	} 
	getch();
	return 0;
}
