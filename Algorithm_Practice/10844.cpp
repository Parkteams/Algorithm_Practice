#include<iostream>
#define MODULE 1000000000
using namespace std;

int dp[101][11] = { 0, };

int main()
{
	int n = 0, answer=0;
	cin >> n;

	dp[1][0] = 0;
	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0) dp[i][j] = dp[i - 1][j + 1] % MODULE;
			else if (j == 9) dp[i][j] = dp[i - 1][j - 1] % MODULE;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MODULE;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		answer += dp[n][i];
	}
	cout << answer % MODULE;

	return 0;
}