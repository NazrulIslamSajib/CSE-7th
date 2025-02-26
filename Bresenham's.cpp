#include<bits/stdc++.h>  
#include<conio.h>
#include<graphics.h>
using namespace std; 
int main()
{   
    int gd=DETECT,gm; 
    initgraph(&gd,&gm,"C:\\TURBOC#\\BGI"); 
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    long long dy=(y2-y1),dx=x2-x1;
    long long p=2*dy-dx;
    cout<<x1<<" "<<y1<<" "<<p<<endl;
    long long x=x1,y=y1; 
    putpixel(x,y,WHITE);
    while(x<=x2)
    {
        if(p<0)
        {
            p=p+2*dy;
        }
        else
        {
            p=p+2*dy-2*dx;
            y++;
        } 
        putpixel(x,y,WHITE);
        x++;

    }  
    getch();
    closegraph();
    return 0;
}

