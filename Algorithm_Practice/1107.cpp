#include<iostream>
#include<cmath>
using namespace std;

int num = 0, broken = 0, unbroken = 0;;
int arr[9] = { 0 };
int first_N = 0;
int nb_arr[9] = { 0 };
int down = 0, high = 0;
int answer = 0;
int ten_num = 0;

int main()
{
	cin >> num >> broken;
	for (int i = 0; i < broken; i++)
	{
		cin >> arr[i];
	}

	//num의 첫째 자리수 추출
	for (int i = 0; i < 6; i++)
	{
		if (num / pow(10, i) < 10) {
			first_N = num / pow(10, i);
			ten_num = i;
			break;
		}
	}

	//목표 숫자의 가장 높은 자릿수보다 안고장난 버튼중에서 바로 위 숫자, 바로 아래 숫자 찾기
	for (int i = 1; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < broken; j++)
		{
			if (arr[j] != i)
			{
				count++;
			}
		}
		if (count == broken) {
			nb_arr[unbroken] = i;
			unbroken++;
		}
	}
	int count = 0;
	for (int i = 0; i < unbroken; i++)
	{
		if (nb_arr[i] <= first_N) {
			count++;
		}
	}
	down = nb_arr[count - 1];
	high = nb_arr[count];

	int down_num = 0;
	//down일경우 눌러야되는 횟수
	for (int i = ten_num-1; i >= 0; i--)
	{
		down_num += pow(10, i)* nb_arr[unbroken-1];
	}
	down_num += pow(10, ten_num) * down;
	int down_count = num - down_num;

	int high_num = 0;
	//high일경우 눌러야되는 횟수
	for (int i = ten_num - 1; i >= 0; i--)
	{
		high_num += pow(10, i) * nb_arr[0];
	}
	high_num += pow(10, ten_num) * high;
	int high_count = high_num - num;

	cout << down_num << endl << high_num;

	return 0;
}