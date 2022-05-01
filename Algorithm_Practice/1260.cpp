#include<iostream>
#include<queue>
using namespace std;

int array2[1001][1001] = { 0, };

void dfs(int m, int* visited)
{
	cout << m << " ";
	visited[m] = 1;
	for (int i = 0; i < 1001; i++)
	{
		if (array2[m][i] == 2 and visited[i] == 0)
		{
			dfs(i, visited);
		}
	}
}

void bfs(int m, int* visited, int N)
{
	queue<int> q;
	q.push(m);
	visited[m] = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < N + 1; i++)
		{
			if (array2[x][i] == 2 and visited[i] == 0)
			{
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	int N = 0, M = 0, V = 0;
	cin >> N >> M >> V;
	int* visited = new int[N + 1];
	for (int i = 0; i < N + 1; i++)
		visited[i] = 0;
	for (int i = 0; i < N + 1; i++)
	{
		for (int j = 0; j < N + 1; j++)
			array2[i][j] = 1;
	}

	int arr_y = 0, arr_x = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> arr_y >> arr_x;
		array2[arr_y][arr_x] = 2;
		array2[arr_x][arr_y] = 2;
	}
	dfs(V, visited);
	cout << endl;

	for (int i = 0; i < N + 1; i++)
		visited[i] = 0;
	bfs(V, visited, N);

	delete[] visited;
	return 0;
}