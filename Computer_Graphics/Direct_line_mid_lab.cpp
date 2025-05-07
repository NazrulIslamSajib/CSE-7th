#include<graphics.h> 
#include<math.h>
#include<conio.h>
#include<iostream> 
using namespace std;
int main()
{
	initwindow(800,800);
	///int gd = DETECT, gm;
    ///initgraph(&gd, &gm, ""); 
    
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float dx=(x2-x1);
    float dy=(y2-y1);
    float steps;
    if(dx>dy)
    { 
      steps=dx;
	} 
	else 
	{ 
	  steps=dy;
	} 
	float x_inc=dx/float(steps); 
	float y_inc=dy/float(steps); 
	float x=x1,y=y1;
	for(int i=0;i<=steps;i++)
	{ 
	   putpixel(round(x),round(y),WHITE); 
	   x+=x_inc;
	   y+=y_inc; 
	} 
	getch();
	return 0;
}
