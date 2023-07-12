#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{

    int gd = DETECT, gm = DETECT, i, j, k, l, m, n, x_yel;
    initgraph(&gd, &gm, "C://TC//BGI");

    // stickmoving
    for (i = 0; i < 35; i++)
    {
        setbkcolor(GREEN);
        cleardevice();
        circle(100, 172, 8); // inside firstcoloumn
        setfillstyle(1, YELLOW);
        floodfill(100, 172, 15);
        circle(100, 189, 8);
        setfillstyle(1, RED);
        floodfill(100, 189, 15);
        circle(100, 206, 8);
        setfillstyle(1, 2);
        floodfill(100, 206, 15);
        circle(100, 223, 8);
        setfillstyle(1, 8);
        floodfill(100, 223, 15);
        circle(100, 240, 8);
        setfillstyle(1, 1);
        floodfill(100, 240, 15);
        circle(115, 180, 8); // secondcoloumn
        setfillstyle(1, 9);
        floodfill(115, 180, 15);
        circle(115, 197, 8);
        setfillstyle(1, 6);
        floodfill(115, 197, 15);
        circle(115, 214, 8);
        setfillstyle(1, 7);
        floodfill(115, 214, 15);
        circle(115, 231, 8);
        setfillstyle(1, 5);
        floodfill(115, 231, 15);
        circle(130, 188, 8); // thirdcoloumn
        setfillstyle(1, 8);
        floodfill(130, 188, 15);
        circle(130, 205, 8);
        setfillstyle(1, 3);
        floodfill(130, 205, 15);
        circle(130, 222, 8);
        setfillstyle(1, 10);
        floodfill(130, 222, 15);
        circle(145, 196, 8); // 4coloumn
        setfillstyle(1, 5);
        floodfill(145, 196, 15);
        circle(145, 213, 8);
        setfillstyle(1, 9);
        floodfill(145, 213, 15);
        circle(160, 204, 8); // 5
        setfillstyle(1, 6);
        floodfill(160, 204, 15);
        circle(360, 209, 9); // main
        setfillstyle(1, 15);
        floodfill(360, 209, 15);
        rectangle(395 - i, 208, 550 - i, 210); // stick
        setfillstyle(1, YELLOW);
        floodfill(396 - i, 209, 15);
        setfillstyle(1, YELLOW);
        floodfill(548 - i, 209, 15);

        circle(10, 10, 10);
        setfillstyle(1, 0);
        floodfill(10, 10, 15);

        circle(10, 465, 10);
        setfillstyle(1, 0);
        floodfill(10, 465, 15);

        circle(330, 10, 10);
        setfillstyle(1, 0);
        floodfill(330, 10, 15);

        circle(330, 465, 10);
        setfillstyle(1, 0);
        floodfill(330, 465, 15);

        circle(620, 10, 10);
        setfillstyle(1, 0);
        floodfill(620, 10, 15);

        circle(620, 465, 10);
        setfillstyle(1, 0);
        floodfill(620, 465, 15);
        delay(10);
    }
    // mainballmoving
    for (i = 0; i < 186; i++)
    {
        setbkcolor(GREEN);
        cleardevice();
        circle(100, 172, 8); // inside firstcoloumn
        setfillstyle(1, YELLOW);
        floodfill(100, 172, 15);
        circle(100, 189, 8);
        setfillstyle(1, RED);
        floodfill(100, 189, 15);
        circle(100, 206, 8);
        setfillstyle(1, 2);
        floodfill(100, 206, 15);
        circle(100, 223, 8);
        setfillstyle(1, 8);
        floodfill(100, 223, 15);
        circle(100, 240, 8);
        setfillstyle(1, 1);
        floodfill(100, 240, 15);
        circle(115, 180, 8); // secondcoloumn
        setfillstyle(1, 9);
        floodfill(115, 180, 15);
        circle(115, 197, 8);
        setfillstyle(1, 6);
        floodfill(115, 197, 15);
        circle(115, 214, 8);
        setfillstyle(1, 7);
        floodfill(115, 214, 15);
        circle(115, 231, 8);
        setfillstyle(1, 5);
        floodfill(115, 231, 15);
        circle(130, 188, 8); // thirdcoloumn
        setfillstyle(1, 8);
        floodfill(130, 188, 15);
        circle(130, 205, 8);
        setfillstyle(1, 3);
        floodfill(130, 205, 15);
        circle(130, 222, 8);
        setfillstyle(1, 10);
        floodfill(130, 222, 15);
        circle(145, 196, 8); // 4coloumn
        setfillstyle(1, 5);
        floodfill(145, 196, 15);
        circle(145, 213, 8);
        setfillstyle(1, 9);
        floodfill(145, 213, 15);
        circle(160, 204, 8); // 5
        setfillstyle(1, 6);
        floodfill(160, 204, 15);
        circle(360 - i, 209, 9); // main
        setfillstyle(1, 15);
        floodfill(360 - i, 209, 15);
        rectangle(395, 208, 550, 210); // stick
        setfillstyle(1, YELLOW);
        floodfill(396, 209, 15);
        setfillstyle(1, YELLOW);
        floodfill(548, 209, 15);

        circle(10, 10, 10);
        setfillstyle(1, 0);
        floodfill(10, 10, 15);

        circle(10, 465, 10);
        setfillstyle(1, 0);
        floodfill(10, 465, 15);

        circle(330, 10, 10);
        setfillstyle(1, 0);
        floodfill(330, 10, 15);

        circle(330, 465, 10);
        setfillstyle(1, 0);
        floodfill(330, 465, 15);

        circle(620, 10, 10);
        setfillstyle(1, 0);
        floodfill(620, 10, 15);

        circle(620, 465, 10);
        setfillstyle(1, 0);
        floodfill(620, 465, 15);
        delay(10);
    }
    int y_yel = 0, x_dblue = 0, y_dblue = 0, x_blue = 0, y_blue = 0;
    // 5coloumnmoving
    for (i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, x_yel = 0; x_yel < 110; i++, j++, k++, l++, m++, n++, x_yel++, x_dblue++, x_blue++)
    {
        y_yel = x_yel * 1.90;
        setbkcolor(GREEN);
        cleardevice();
        if (x_yel < 84)
        {
            circle(100 - x_yel, 172 - y_yel, 8); // inside firstcoloumn
            setfillstyle(1, YELLOW);
            floodfill(100 - x_yel, 172 - y_yel, 15);
        }
        circle(100, 189, 8);
        setfillstyle(1, RED);
        floodfill(100, 189, 15);
        circle(100, 206, 8);
        setfillstyle(1, 2);
        floodfill(100, 206, 15);
        circle(100, 223, 8);
        setfillstyle(1, 8);
        floodfill(100, 223, 15);

        y_dblue = x_dblue * 2.5;
        if (x_dblue < 87)
        {
            circle(100 - x_dblue, 240 + y_dblue, 8);

            setfillstyle(1, 1);
            floodfill(100 - x_dblue, 240 + y_dblue, 15);
        }
        circle(115, 180, 8); // secondcoloumn
        setfillstyle(1, 9);
        floodfill(115, 180, 15);
        circle(115, 197, 8);
        setfillstyle(1, 6);
        floodfill(115, 197, 15);
        circle(115, 214, 8);
        setfillstyle(1, 7);
        floodfill(115, 214, 15);
        circle(115, 231, 8);
        setfillstyle(1, 5);
        floodfill(115, 231, 15);
        circle(130, 188 - l, 8); // thirdcoloumn
        setfillstyle(1, 8);
        floodfill(130, 188 - l, 15);
        circle(130 + n, 205, 8);
        setfillstyle(1, 3);
        floodfill(130 + n, 205, 15);
        x_blue = x_blue + 2;
        y_blue = x_blue * 1.215;
        if (x_blue < 198)
        {
            circle(130 + x_blue, 222 + y_blue, 8);
            setfillstyle(1, 10);
            floodfill(130 + x_blue, 222 + y_blue, 15);
        }
        circle(145, 196 - j, 8); // 4coloumn
        setfillstyle(1, 5);
        floodfill(145, 196 - j, 15);
        circle(145, 213 + k, 8);
        setfillstyle(1, 9);
        floodfill(145, 213 + k, 15);
        circle(160 + i, 204, 8); // 5
        setfillstyle(1, 6);
        floodfill(160 + i, 204, 15);
        circle(160, 209, 9); // main
        setfillstyle(1, 15);
        floodfill(160, 209, 15);
        rectangle(395, 208, 550, 210); // stick
        setfillstyle(1, YELLOW);
        floodfill(396, 209, 15);
        setfillstyle(1, YELLOW);
        floodfill(548, 209, 15);

        circle(10, 10, 10);
        setfillstyle(1, 0);
        floodfill(10, 10, 15);

        circle(10, 465, 10);
        setfillstyle(1, 0);
        floodfill(10, 465, 15);

        circle(330, 10, 10);
        setfillstyle(1, 0);
        floodfill(330, 10, 15);

        circle(330, 465, 10);
        setfillstyle(1, 0);
        floodfill(330, 465, 15);

        circle(620, 10, 10);
        setfillstyle(1, 0);
        floodfill(620, 10, 15);

        circle(620, 465, 10);
        setfillstyle(1, 0);
        floodfill(620, 465, 15);
        delay(10);
    }
    getch();
    closegraph();
    // closing pool table

    // opening success msg
    initgraph(&gd, &gm, "C://TC//BGI");
    cleardevice();
    // setbkcolor(11);
    setcolor(5);

    settextstyle(10, 0, 5);

    outtextxy(50, 50, " 3 BALLS IN!");
    getch();
    closegraph();

    // opening scoreboard
    initgraph(&gd, &gm, "C://TC//BGI");
    cleardevice();
    // setbkcolor(11);
    setcolor(5);

    settextstyle(3, 0, 5);

    outtextxy(50, 150, "SCORE: 300");
    getch();
    closegraph();

    // Thankyou window
    initgraph(&gd, &gm, "C://TC//BGI");
    cleardevice();

    setcolor(5);

    settextstyle(10, 0, 5);
    outtextxy(50, 50, "THANKS FOR WATCHING!");

    getch();
    closegraph();

    return 0;
}