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
		printf("������ 1, ������ 2, ���� 3: ");
		int input = 0;
		cin >> input;
		printf("����� ");
		Print(input);
		printf(" ����, ��ǻ�ʹ� ");
		int ComNum = rand() % 3 + 1;
		Print(ComNum);
		printf(" ����, ");
		Result(input, ComNum, &winCount, &drawCount, &isWin);
	}
	printf("������ ���: %d�� %d��", winCount, drawCount);


	return 0;
}

void Print(int num) {
	switch (num)
	{
	case 1:
		printf("����");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("��");
		break;
	}
}

void Result(int num, int num2, int* wi, int* dr, bool* isWin)
{
	if (num == num2) {
		printf("�����ϴ�!");
		(*dr)++;
	}
	else if (num - num2 == 1 or (num == 1 and num2 == 3)) {
		printf("�����ϴ�!");
		(*isWin) = false;
	}
	else {
		printf("�̰���ϴ�");
		(*wi)++;
	}
	printf("\n");
}
