#include<iostream>
using namespace std;

int E = 0, S = 0, M = 0;
int answer = 0;

int main()
{
	cin >> E >> S >> M;
	
	int num = 210000000;
	for (int i = 0; i < num; i++)
	{
		if (i >= E and i >= S and i >= M)
		{
			if ((i - E) % 15 == 0 and (i - S) % 28 == 0 and (i - M) % 19 == 0)
			{
				answer = i;
				break;
			}
		}
	}
	cout << answer;

	return 0;
}