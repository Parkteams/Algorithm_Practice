#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#�̸�: ��� \n", fp);
	fputs("#�ֹι�ȣ: 900209-1012589 \n", fp);
	fputs("#��ȭ��ȣ: 010-1111-2222 \n", fp);
	fclose(fp);

	return 0;
}