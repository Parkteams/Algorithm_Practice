#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* pos1, Point* pos2) {
	swap(pos1->xpos, pos2->xpos);
	swap(pos1->ypos, pos2->ypos);
}

int main()
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);

	printf("%d %d \n", pos1.xpos, pos1.ypos);
	printf("%d %d", pos2.xpos, pos2.ypos);

	return 0;
}