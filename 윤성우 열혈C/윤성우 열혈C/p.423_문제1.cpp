#include<stdio.h>

int ConvCase(int ch);

int main()
{
	int ch;
	printf("���� �Է�: ");
	ch = getchar();
	ch = ConvCase(ch);
	if (ch == -1) {
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch);

	return 0;
}

int ConvCase(int ch)
{
	int diff = 'a' - 'A';
	if (ch >= 'A' and ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' and ch <= 'z') {
		return ch - diff;
	}
	else {
		return -1;
	}
}