#include<iostream>
#include<algorithm>
#define MAX 2000000000
using namespace std;


int N = 0;
int board[21][21] = {0,};

int Max = -MAX;

//��Ʈ��ŷ(dfs)
void Move(int num)
{
	if (num == 0) //����������
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = N; j >= 1; j--)
			{
				if (board[i][j] != 0) //�����ʿ��� �������� ���ٰ� 0�� �ƴѰ� �߰�
				{
					arr[20 - count] = board[i][j];
					count++;
				}
			}
			//�����ʺ��� �������� �ߺ��Ǵ°� �ֳ� Ȯ��
			for (int j = 20; j > 20-count+1; j--)
			{
				if (arr[j] == arr[j - 1])
				{
					arr[j] *= 2; //2��� �����
					board[i][j] = arr[j];
					for (int k = j - 1; k > 20 - count + 1; k--) //����ֱ�
					{
						arr[k] = arr[k - 1];
						board[i][k] = board[i][k - 1];
					}
				}
			}
		}
	}
	else if (num == 1) //��������
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = 1; j <= 20; j++)
			{
				if (board[i][j] != 0) //���ʿ��� ���������� ���ٰ� 0�� �ƴѰ� �߰�
				{
					arr[count] = board[i][j];
					count++;
				}
			}
			//���ʺ��� ���������� �ߺ��Ǵ°� �ֳ� Ȯ��
			for (int j = 1; j < count; j++)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2��� �����
					board[i][j] = arr[j];
					for (int k = j+1; k < count; k++) //����ֱ�
					{
						arr[k] = arr[k + 1];
						board[i][k] = board[i][k + 1];
					}
				}
			}
		}
	}
	else if (num == 2) //��������
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = 1; j <= 20; j++)
			{
				if (board[j][i] != 0) //���ʿ��� �Ʒ������� ���ٰ� 0�� �ƴѰ� �߰�
				{
					arr[count] = board[j][i];
					count++;
				}
			}
			//���ʺ��� �Ʒ������� �ߺ��Ǵ°� �ֳ� Ȯ��
			for (int j = 1; j < count; j++)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2��� �����
					board[j][i] = arr[j];
					for (int k = j + 1; k < count; k++) //����ֱ�
					{
						arr[k] = arr[k + 1];
						board[k][i] = board[k+1][i];
					}
				}
			}
		}
	}
	else if (num == 3) //�Ʒ�������
	{
		for (int i = 1; i <= N; i++)
		{
			int arr[21] = { 0 };
			int count = 0;
			for (int j = N; j >= 1; j--)
			{
				if (board[j][i] != 0) //�Ʒ��ʿ��� �������� ���ٰ� 0�� �ƴѰ� �߰�
				{
					arr[count] = board[j][i];
					count++;
				}
			}
			//�Ʒ��ʺ��� �������� �ߺ��Ǵ°� �ֳ� Ȯ��
			for (int j = 20; j > 20 - count + 1; j--)
			{
				if (arr[j] == arr[j + 1])
				{
					arr[j] *= 2; //2��� �����
					board[j][i] = arr[j];
					for (int k = j - 1; k > 20 - count + 1; k--) //����ֱ�
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
	//����
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

	//������
	for (int i = 0; i < 4; i++)
	{
		if (i == 0) { //����������
			Move(0);
			DFS(0,count+1);
		}
		else if (i == 1) { //��������
			Move(1);
			DFS(0, count + 1);
		}
		else if (i == 2) { //����
			Move(2);
			DFS(0, count + 1);
		}
		else { //�Ʒ���
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