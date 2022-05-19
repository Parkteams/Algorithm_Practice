#include<iostream>
#include<algorithm>
using namespace std;

int N = 0;

int stats[21][21] = { 0, };
int check[21] = { 0 };	//1: ��ŸƮ��, 0: ��ũ��

int ans = 2000000000; //20��

//dfs
void DFS(int x, int pos)
{
	//����
	if (x == N / 2)
	{
		int start = 0, link = 0;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (check[i] == 1 and check[j] == 1)
					start += stats[i][j];
				if (check[i] == 0 and check[j] == 0)
					link += stats[i][j];
			}
		}
		int temp = abs(start - link); //������ ���밪
		ans = min(temp, ans); //���� �ּڰ�

		return;
	}
	//������
	for (int i = pos; i < N; i++)
	{
		check[i] = 1;
		DFS(x + 1, i + 1);
		check[i] = 0;
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> stats[i][j];
		}
	}

	DFS(0, 1);

	cout << ans;

	return 0;
}