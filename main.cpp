
#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    int x0 = 0;
    int y0 = 300;
    int r  = 50;
    float a = 0;
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int l = 150;


    while(x0 < 800)
    {
        txSetColor (TX_BLACK);
        txSetFillColor (TX_BLACK);
        txRectangle (0, 0, 800, 600);

        txSetColor (TX_WHITE, 5);
        txSetFillColor (TX_BLACK);
        txCircle (x0, y0, r);
        txCircle (x0+l, y0, r);

        x1 = x0+r*cos(a);
        y1 = y0+r*sin(a);
        x2 = x0+r*cos(a+2.1);
        y2 = y0+r*sin(a+2.1);
        x3 = x0+r*cos(a+4.2);
        y3 = y0+r*sin(a+4.2);

        txLine    (x0, y0, x1, y1);
        txLine    (x0, y0, x2, y2);
        txLine    (x0, y0, x3, y3);
        txLine    (x0+l, y0, x1+l, y1);
        txLine    (x0+l, y0, x2+l, y2);
        txLine    (x0+l, y0, x3+l, y3);

        x0+=5;
        a+=0.1;
        txSleep(10);

        }



    txTextCursor (false);
    return 0;
    }

