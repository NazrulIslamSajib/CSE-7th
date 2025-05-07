#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{ 
    initwindow(800,800);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx=x2-x1;
    int dy=y2-y1;
    if(dx==0)
    { 
        if(y1>y2)
        { 
          swap(y1,y2);
		} 
		for(int i=y1;i<=y2;i++)
		{ 
		  putpixel(x1,i,WHITE);
		}
	}  
	else if(dy==0)
	{ 
	   if(x1>x2)
	   { 
	     swap(x1,x2); 
	   } 
	   for(int x=x1;x<=x2;x++)
	   { 
	     putpixel(x,y1,WHITE);
	   }
	} 
	else 
	{ 
	   double m=(dy/double(dx));  
	   if(abs(m)<=1) 
	   { 
	       if(x1>x2) 
		   {
		   	  swap(x1,x2);  
		   	  swap(y1,y2);
	      	}  
	       double y=y1;
	       
	       for(int x=x1;x<=x2;x++)
	       {  
	         
	          putpixel(x,int(y+0.5),WHITE); 
	          y+=m;
		   }
	   } 
	   else 
	    { 
	       if(y1>y2) {
	       	swap(y1,y2); 
	       	swap(x1,x2);
	       	
		   }
	       double x=x1; 
		   for(int y=y1;y<=y2;y++)
		   { 
		     putpixel(int(x+0.5),y,WHITE);
		     x+= 1.0 / m;
		     
		   } 
		}
	}
	getch();
	return 0;
}
