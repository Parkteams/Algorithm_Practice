#include<iostream>
#include<queue>
#include<cstring>
#include<string>
using namespace std;

struct XY
{
	int y;
	int x;
};
queue<XY> q;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int arr[101][101] = { 0, };

int num = 0, n = 0, m = 0, result = 0;

bool IsInside(int ny, int nx) {
	return (1 <= nx and 1 <= ny and ny < n + 1 and nx < m + 1);
}

int main()
{
	cin >> n >> m;
	string str = " ";
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		char* Str = new char[str.length() + 1];
		strcpy(Str, str.c_str());
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = Str[j - 1] - 48;
		}
		delete[] Str;
	}
	q.push({ 1,1 });
	while (!q.empty())
	{
		int y = q.front().y;
		int x = q.front().x;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (IsInside(ny, nx) == 1 and arr[ny][nx] == 1)
			{
				arr[ny][nx] = arr[y][x] + 1;
				q.push({ ny, nx });
			}
		}
	}
	cout << arr[n][m];

	return 0;
}