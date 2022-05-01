#include<iostream>
#include<algorithm>
using namespace std;

char arr[50][50] = { 0, };
int answer = 0;

void check(int num)
{
	int count[4] = { 0 };
	int same[100] = { 0 };
	int max = 0;
	int number = 0;
	//행에서 가장많이 나오는 값
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < 4; k++) count[k] = 0;
		for (int j = 0; j < num; j++)
		{
			if (arr[i][j] == 'P') count[0]++;
			if (arr[i][j] == 'C') count[1]++;
			if (arr[i][j] == 'Y') count[2]++;
			if (arr[i][j] == 'Z') count[3]++;
		}
		max = count[0];
		for (int k = 1; k < 4; k++)
		{
			if (max < count[k]) max = count[k];
		}
		same[number] = max;
		number++;
	}

	//열에서 가장 많이 나오는 값
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < 4; k++) count[k] = 0;
		for (int j = 0; j < num; j++)
		{
			if (arr[j][i] == 'P') count[0]++;
			if (arr[j][i] == 'C') count[1]++;
			if (arr[j][i] == 'Y') count[2]++;
			if (arr[j][i] == 'Z') count[3]++;
		}
		max = count[0];
		for (int k = 1; k < 4; k++)
		{
			if (max < count[k]) max = count[k];
		}
		same[number] = max;
		number++;
	}
	//가장 많이 나온 행이나 열의 개수 찾아서 그게 더 크면 answer값 기록
	max = same[0];
	for (int i = 0; i < 100; i++)
	{
		if (max < same[i]) max = same[i];
	}
	if (answer < max) answer = max;
}

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cin >> arr[i][j];
		}
	}
	//행바꾸기
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			swap(arr[i][j],arr[i][j+1]);
			check(num);
			swap(arr[i][j], arr[i][j + 1]);
		}
	}
	//열바꾸기
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < num - 1; i++)
		{
			swap(arr[i][j], arr[i+1][j]);
			check(num);
			swap(arr[i][j], arr[i + 1][j]);
		}
	}

	cout << answer;
	
	return 0;
}