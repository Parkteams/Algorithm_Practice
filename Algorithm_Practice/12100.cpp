#include<iostream>
#include<algorithm>
#define MAX 2000000000
using namespace std;


int N = 0;
int board[21][21] = {0,};

int Max = -MAX;

//백트래킹(dfs)
void Move(int num)
{
	if (num == 0) //오른쪽으로
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = N; j >= 1; j--)
			{
				if (board[i][j] != 0) //오른쪽에서 왼쪽으로 가다가 0이 아닌거 발견
				{
					arr[20 - count] = board[i][j];
					count++;
				}
			}
			//오른쪽부터 왼쪽으로 중복되는거 있나 확인
			for (int j = 20; j > 20-count+1; j--)
			{
				if (arr[j] == arr[j - 1])
				{
					arr[j] *= 2; //2배로 만들기
					board[i][j] = arr[j];
					for (int k = j - 1; k > 20 - count + 1; k--) //당겨주기
					{
						arr[k] = arr[k - 1];
						board[i][k] = board[i][k - 1];
					}
				}
			}
		}
	}
	else if (num == 1) //왼쪽으로
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = 1; j <= 20; j++)
			{
				if (board[i][j] != 0) //왼쪽에서 오른쪽으로 가다가 0이 아닌거 발견
				{
					arr[count] = board[i][j];
					count++;
				}
			}
			//왼쪽부터 오른쪽으로 중복되는거 있나 확인
			for (int j = 1; j < count; j++)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2배로 만들기
					board[i][j] = arr[j];
					for (int k = j+1; k < count; k++) //당겨주기
					{
						arr[k] = arr[k + 1];
						board[i][k] = board[i][k + 1];
					}
				}
			}
		}
	}
	else if (num == 2) //위쪽으로
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = 1; j <= 20; j++)
			{
				if (board[j][i] != 0) //위쪽에서 아래쪽으로 가다가 0이 아닌거 발견
				{
					arr[count] = board[j][i];
					count++;
				}
			}
			//위쪽부터 아래쪽으로 중복되는거 있나 확인
			for (int j = 1; j < count; j++)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2배로 만들기
					board[j][i] = arr[j];
					for (int k = j + 1; k < count; k++) //당겨주기
					{
						arr[k] = arr[k + 1];
						board[k][i] = board[k+1][i];
					}
				}
			}
		}
	}
	else if (num == 3) //아래쪽으로
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = N; j >= 1; j--)
			{
				if (board[j][i] != 0) //아래쪽에서 위쪽으로 가다가 0이 아닌거 발견
				{
					arr[count] = board[j][i];
					count++;
				}
			}
			//아래쪽부터 위쪽으로 중복되는거 있나 확인
			for (int j = 20; j > 20 - count + 1; j--)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2배로 만들기
					board[j][i] = arr[j];
					for (int k = j - 1; k > 20 - count + 1; k--) //당겨주기
					{
						arr[k] = arr[k - 1];
						board[k][i] = board[k + 1][i];
					}
				}
			}
		}
	}
}

void DFS(int result, int count)
{
	//도달
	if (count == N)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				Max = max(Max, board[i][j]);
			}
		}
	}

	//돌리기
	for (int i = 0; i < 4; i++)
	{
		if (i == 0) { //오른쪽으로
			Move(0);
			DFS(0,count+1);
		}
		else if (i == 1) { //왼쪽으로
			Move(1);
			DFS(0, count + 1);
		}
		else if (i == 2) { //위로
			Move(2);
			DFS(0, count + 1);
		}
		else { //아래로
			Move(3);
			DFS(0, count + 1);
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> board[i][j];
		}
	}

	Move(0);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << board[i][j]<< " ";
		}
		cout << endl;
	}

	//cout << Max;

	return 0;
}