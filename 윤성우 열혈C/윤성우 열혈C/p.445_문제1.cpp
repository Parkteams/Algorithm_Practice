#include<stdio.h>
#include<string.h>

int ConvToInt(char ch);

int main()
{
	char str[50];

	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	int sum = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] >= '1' and str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}
	printf("%d", sum);

	return 0;
}

int ConvToInt(char ch)
{
	int diff = 1 - '1';
	return diff + ch;
}