#include<iostream>
using namespace std;

int arr[1000][1000] = { 0, };
void dfs(int m, int* visited)
{
	visited[m] = 1;
	for (int i = 0; i < 1000; i++)
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
		arr[arr_y - 1][arr_x - 1] = 2;
		arr[arr_x - 1][arr_y - 1] = 2;
	}
	int Count = 0;
	for (int i = 0; i < Num; i++)
	{
		if (visited[i] == 0)
		{
			dfs(i, visited);
			Count++;
		}
	}
	cout << Count;

	delete[] visited;
	return 0;
}