#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw rectangle (left, top, right, bottom)
    rectangle(100, 100, 400, 300);

    // Draw ellipse inside rectangle
    // ellipse(center_x, center_y, start_angle, end_angle, x_radius, y_radius)
    ellipse(250, 200, 0, 360, 120, 80);

    // Set text style (font, direction, size)
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    // Set text color
    setcolor(WHITE);

    // Write text inside ellipse (approx center)
    outtextxy(200, 190, "Hello");

    getch();
    closegraph();
    return 0;
}

