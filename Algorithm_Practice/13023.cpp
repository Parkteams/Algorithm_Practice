#include<iostream>
using namespace std;

int arr[2000][2000] = { 0, };
void dfs(int m, int* visited)
{
	visited[m] = 1;
	for (int i = 0; i < 2000; i++)
	{
		if (arr[m][i] == 2 and visited[i] == 0)
		{
			dfs(i, visited);
		}
	}
}

int main() {
	int Num = 0, Bind = 0;
	cin >> Num >> Bind;
	int* visited = new int[Num];
	for (int i = 0; i < Num; i++)
		visited[i] = 0;
	int arr_y = 0, arr_x = 0;
	for (int i = 0; i < Num; i++)
	{
		for (int j = 0; j < Num; j++)
			arr[i][j] = 1;
	}
	for (int i = 0; i < Bind; i++)
	{
		cin >> arr_y >> arr_x;
		arr[arr_y][arr_x ] = 2;
		arr[arr_x ][arr_y] = 2;
	}
	int isTrue = 0;
	for (int i = 0; i < Num; i++)
	{
		dfs(i, visited);
		int Count = 0;
		for (int i = 0; i < Num; i++)
		{
			if (visited[i] == 1)
				Count++;
		}
		if (Count >= 5)
		{
			isTrue = 1;
			break;
		}
		for (int i = 0; i < Num; i++)
			visited[i] = 0;
	}
	cout << isTrue;

	delete[] visited;
	return 0;
}