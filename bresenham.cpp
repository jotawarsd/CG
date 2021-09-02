#include <iostream>
#include <math.h>
using namespace std;

void bsline(int x1, int y1, int x2, int y2)
{
    int dx, dy, p;
    dx = x2 - x1;
    dy = y2 - y1;
    p = (2*dy) - dx;

    while(x1 <= x2)
    {
        if(p < 0)
        {
            x1 += 1;
            y1 = y1;
            p += (2*dy);
        }
        else
        {
            x1 += 1;
            y1 += 1;
            p += 2*(dy-dx);
        }

        putpixel(x1, y1, RED);
        delay(10);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    int x1, x2, y1, y2;
    cout<< "enter x1: ";
    cin>> x1;
    cout<< "enter y1: ";
    cin>> y1;
    cout<< "enter x2: ";
    cin>> x2;
    cout<< "enter y2: ";
    cin>> y2;

    bsline(x1, y1, x2, y2);
}