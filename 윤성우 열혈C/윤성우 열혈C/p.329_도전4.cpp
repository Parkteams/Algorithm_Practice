#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	char str[40] = " ";

	cin >> str;
	
	int length = 0;
	while (true) {
		if (str[length] == '\0') break;
		length++;
	}

	int i = 0;
	while (true) {
		if (str[i] != str[length -1 - i]) {
			cout << "ȸ���� �ƴմϴ�.";
			break;
		}
		if (i > length / 2) {
			cout << "ȸ���Դϴ�.";
			break;
		}
		i++;
	}


	return 0;
}