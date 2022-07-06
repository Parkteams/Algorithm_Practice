#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

void Print(int num);
void Result(int num, int num2, int* wi, int* dr, bool* isWin);

int main()
{
	srand((int)time(NULL));
	
	int winCount = 0, drawCount = 0;
	bool isWin = true;
	while (isWin)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		int input = 0;
		cin >> input;
		printf("당신은 ");
		Print(input);
		printf(" 선택, 컴퓨터는 ");
		int ComNum = rand() % 3 + 1;
		Print(ComNum);
		printf(" 선택, ");
		Result(input, ComNum, &winCount, &drawCount, &isWin);
	}
	printf("게임의 결과: %d승 %d무", winCount, drawCount);


	return 0;
}

void Print(int num) {
	switch (num)
	{
	case 1:
		printf("바위");
		break;
	case 2:
		printf("가위");
		break;
	case 3:
		printf("보");
		break;
	}
}

void Result(int num, int num2, int* wi, int* dr, bool* isWin)
{
	if (num == num2) {
		printf("비겼습니다!");
		(*dr)++;
	}
	else if (num - num2 == 1 or (num == 1 and num2 == 3)) {
		printf("졌습니다!");
		(*isWin) = false;
	}
	else {
		printf("이겼습니다");
		(*wi)++;
	}
	printf("\n");
}
