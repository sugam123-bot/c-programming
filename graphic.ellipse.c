#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int midx = getmaxx() / 2; // center X
    int midy = getmaxy() / 2; // center Y

    ellipse(midx, midy, 0, 360, 100, 50); // centered ellipse, 100px wide, 50px tall

    getch();
    closegraph();
return 0;
}
