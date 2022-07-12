#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct Rectangle
{
	Point pos1;
	Point pos2;
} Rect;

void PrintRectWidth(Rect rect) {
	printf("%d", (rect.pos2.xpos - rect.pos1.xpos) * (rect.pos2.ypos - rect.pos1.ypos));
}

void PrintRectPoint(Rect rect) {
	printf("%d %d, %d %d, %d %d, %d %d", rect.pos1.xpos, rect.pos1.ypos, rect.pos2.xpos, rect.pos1.ypos, rect.pos1.xpos, rect.pos2.ypos, rect.pos2.xpos, rect.pos2.ypos);
}

int main()
{
	Rect rect = { 0,0,100,100 };
	PrintRectWidth(rect);
	printf("\n");
	PrintRectPoint(rect);

	return 0;
}