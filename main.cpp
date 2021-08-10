// Digital Clock with Graphics in C++
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<string.h>
void main(){
	int gd=DETECT, gm;
	int midx, midy;
	long currentTime;
	char timeStr[256];
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	midx=getmaxx()/2;
	midy=getmaxy()/2;
	while (!kbhit()){
		cleardevice();
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, WHITE);
		rectangle(midx - 250, midy - 40,midx + 250, midy + 40);
		floodfill(midx, midy, WHITE);
		currentTime=time(NULL);
		strcpy(timeStr, ctime(&currentTime));
		setcolor(GREEN);
		settextjustify(CENTER_TEXT, CENTER_TEXT);
		settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
		moveto(midx, midy);
		outtext(timeStr);
		delay(1000);
	}
	getch();
	closegraph();
}
