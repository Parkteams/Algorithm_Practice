#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int dy[4] = { 0,-1,0,1 };
int dx[4] = { -1,0,1,0 };
int arr[25][25];
int visited[25][25];
int Count = 0;
int Total = 0;

void dfs(int y, int x, int Num) {
	visited[y][x] = 1;
	Count++;
	for (int i = 0; i < 4; i++)
	{
		int my = y + dy[i];
		int mx = x + dx[i];
		if (arr[my][mx] == 1 and my >= 0 and mx >= 0 and my < Num and mx < Num and visited[my][mx] == 0)
		{
			dfs(my, mx, Num);
		}

	}
}

int main() {
	int Num = 0;
	cin >> Num;
	int* ans = new int[Num * Num];
	for (int i = 0; i < Num * Num; i++)
	{
		ans[i] = Num * Num + 1;
	}
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			arr[i][j] = 10;
			visited[i][j] = 0;
		}
	}
	string str = " ";
	for (int i = 0; i < Num; i++)
	{
		cin >> str;
		char* Str = new char[str.length() + 1];
		strcpy(Str, str.c_str());
		for (int j = 0; j < Num; j++)
		{
			arr[i][j] = Str[j] - 48;
		}
		delete[] Str;
	}

	for (int i = 0; i < Num; i++)
	{
		for (int j = 0; j < Num; j++)
		{
			if (arr[i][j] == 1 and visited[i][j] == 0)
			{
				Count = 0;
				dfs(i, j, Num);
				ans[Total] = Count;
				Total++;
			}
		}
	}
	cout << Total << endl;

	for (int i = 0; i < Total - 1; i++) {
		for (int j = i + 1; j < Total; j++) {
			if (ans[i] > ans[j]) {
				int temp = ans[i];
				ans[i] = ans[j];
				ans[j] = temp;
			}
		}
	}

	for (int i = 0; i < Total; i++)
	{
		cout << ans[i] << endl;
	}

	delete[] ans;
	return 0;
}