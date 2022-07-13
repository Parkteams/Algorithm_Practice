#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	char str[100];
	FILE* fp = fopen("mystory.txt", "rt");

	while (fgets(str, sizeof(str), fp) != NULL) {
		fputs(str,stdout);
	}
	fclose(fp);

	return 0;
}