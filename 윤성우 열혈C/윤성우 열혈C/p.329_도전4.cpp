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
			cout << "회문이 아닙니다.";
			break;
		}
		if (i > length / 2) {
			cout << "회문입니다.";
			break;
		}
		i++;
	}


	return 0;
}