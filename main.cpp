#include <graphics.h>
#include <iostream>
#include <math.h>
#include <dos.h>
using namespace std;

int main()
{
   float x,y,x1,y1,x2,y2,dxx,dyy,step,dx,dy;
   int i, gd = DETECT, gm;

   initgraph(&gd, &gm, "");


   cout << "Enter The value of X1 and Y1:\n\tX1 = ";
   cin >> x1;
   cout << "\tY1 = ";
   cin >> y1;

   cout << "Enter The value of X2 and Y2:\n\tX2 = ";
   cin >> x2;
   cout << "\tY2 = ";
   cin >> y2;

   if(x1 == x2 && y1 == y2){
            cout << "Here start and end point is same...";
            putpixel(x1,y1,10);
            getch();
        }else{
            dyy = y2-y1;
           dxx = x2-x1;

           dy = abs(dyy);
           dx = abs(dxx);


       if(dx>=dy){
            step=dx;
       }else{
            step=dy;
       }

       //step = abs(ste); // if  netative  then it will be positive

        dx=dx/step;
        dy=dy/step;

        x=x1;
        y=y1;

        i=1;
        while(i<=step){
            putpixel(x,y,10);
            if(x<=x2){
                x=x+dx;
                y=y+dy;
                i=i+1;
                delay(100);
            }
            if(x>x2){    // for reverse slop...
                x=x-dx;
                y=y-dy;
                i=i+1;
                delay(100);
            }
        }
        getch();
    }
    //closegraph();
    return 0;
}
