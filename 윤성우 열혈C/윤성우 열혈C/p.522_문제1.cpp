#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#이름: 운성우 \n", fp);
	fputs("#주민번호: 900209-1012589 \n", fp);
	fputs("#전화번호: 010-1111-2222 \n", fp);
	fclose(fp);

	return 0;
}