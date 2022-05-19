#include<iostream>
using namespace std;

int arr[600][600] = { 0, };
int brr[600][600] = { 0, };

int H = 0, W = 0, X = 0, Y = 0;

int main()
{
	cin >> H >> W >> X >> Y;

	for (int i = 0; i < H + X; i++)
	{
		for (int j = 0; j < W + Y; j++)
		{
			cin >> brr[i][j];
		}
	}

	//困 场 夸家
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			arr[i][j] = brr[i][j];
		}
	}
	//哭率 场 夸家
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < W; j++)
		{
			arr[i][j] = brr[i][j];
		}
	}
	//坷弗率 场 夸家
	for (int i = X; i < H + X; i++)
	{
		for (int j = W; j < W + Y; j++)
		{
			arr[i - X][j - Y] = brr[i][j];
		}
	}
	//酒贰 场 夸家
	for (int i = H; i < H + X; i++)
	{
		for (int j = W; j < W + Y; j++)
		{
			arr[i - X][j - Y] = brr[i][j];
		}
	}
	//长 夸家
	for (int i = X; i < H; i++)
	{
		for (int j = Y; j < W; j++)
		{
			arr[i][j] = brr[i][j] - arr[i - X][j - Y];
		}
	}

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}