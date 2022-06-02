#include<iostream>
#include<algorithm>
using namespace std;

struct Line
{
	int line_sort;
	int line_pos;
};

int width = 0, height = 0;
int line_num = 0;

int main()
{
	cin >> width >> height;
	cin >> line_num;

	Line* line = new Line[line_num];

	for (int i = 0; i < line_num; i++)
	{
		cin >> line[i].line_sort >> line[i].line_pos;
	}

	int cnt = 0, cnt2 = 0;
	for (int i = 0; i < line_num; i++)
	{
		if (line[i].line_sort == 0)
		{
			cnt++;
		}
		else
		{
			cnt2++;
		}
	}
	int* height_pos = new int[cnt];
	int* width_pos = new int[cnt2];

	int num = 0, num2 = 0;
	for (int i = 0; i < line_num; i++)
	{
		if (line[i].line_sort == 0)
		{
			height_pos[num] = line[i].line_pos;
			num++;
		}
		else
		{
			width_pos[num2] = line[i].line_pos;
			num2++;
		}
	}

	sort(height_pos, height_pos + num);
	sort(width_pos, width_pos + num2);

	int max = 0;
	int max2 = 0;
	if (num != 0) max = height_pos[0] - 0;
	else
		max = height;
	if (num2 != 0) max2 = width_pos[0] - 0;
	else
		max = width;
	for (int i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			int differ = height - height_pos[num - 1];
			if (max < differ)
			{
				max = differ;
			}
		}
		else {
			int differ = height_pos[i + 1] - height_pos[i];
			if (max < differ)
			{
				max = differ;
			}
		}
	}
	for (int i = 0; i < num2; i++)
	{
		if (i == num2 - 1)
		{
			int differ = width - width_pos[num2 - 1];
			if (max2 < differ)
			{
				max2 = differ;
			}
		}
		else {
			int differ = width_pos[i + 1] - width_pos[i];
			if (max2 < differ)
			{
				max2 = differ;
			}
		}
	}

	cout << max * max2;


	delete[] line;
	delete[] height_pos;
	delete[] width_pos;
	return 0;
}