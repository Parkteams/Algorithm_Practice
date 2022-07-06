#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

void Result(int* inputArr, int* ptrArr, int* strCount, int* ballCount, bool* isfail);

int main()
{
	srand((int)time(NULL));

	bool isfail = true;
	int gameCount = 1;

	int ans[3] = { 0 };
	
	while (1) {
		for (int i = 0; i < 3; i++) {
			ans[i] = rand() % 10;
		}
		if (ans[0] != ans[1] and ans[1] != ans[2] and ans[0] != ans[2]) break;
	}

	printf("%d %d %d\n", ans[0], ans[1], ans[2]);

	printf("Start Game!\n");
	while (isfail)
	{
		int strCount = 0, ballCount = 0;
		printf("3개의 숫자 선택: ");
		int inputArr[3] = { 0 };
		for (int i = 0; i < 3; i++) {
			cin >> inputArr[i];
		}
		printf("%d번째 도전 결과: ", gameCount);
		Result(inputArr, ans, &strCount, &ballCount, &isfail);

		printf("%dstrike, %dball!!\n", strCount, ballCount);
	}

	printf("\nGame Over!");

	return 0;
}

void Result(int* inputArr, int* ptrArr, int* strCount, int* ballCount, bool* isfail)
{
	for (int i = 0; i < 3; i++) {
		if (inputArr[i] == ptrArr[i]) {
			(*strCount)++;
		}
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				if (inputArr[i] == ptrArr[j]) {
					(*ballCount)++;
				}
			}
		}
	}
	if ((*strCount) == 3) {
		*isfail = false;
	}
}
