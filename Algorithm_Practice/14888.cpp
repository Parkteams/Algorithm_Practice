#include<iostream>
#include<algorithm>
#define MAX 2000000000
using namespace std;

int N = 0;
int num[12] = {0};
int oper[4] = {0};

int Min = MAX;
int Max = -MAX;

//백트래킹(dfs)

void DFS(int result, int count)
{
	//도달
	if (count == N - 1) {
		if (Min > result)
			Min = result;
		if (Max < result)
			Max = result;
	}

	//돌리기
	for (int i = 0; i < 4; i++)
	{
		if (oper[i] == 0) continue;

		oper[i]--;

		if (i == 0) {
			DFS(result + num[count + 1], count + 1);
		}
		else if (i == 1) {
			DFS(result - num[count + 1], count + 1);
		}
		else if (i == 2) {
			DFS(result * num[count + 1], count + 1);
		}
		else {
			DFS(result / num[count + 1], count + 1);
		}
		oper[i]++;
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> oper[i];
	}

	DFS(num[0], 0);

	cout << Max << endl << Min;

	return 0;
}