#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct employee {
	char name[20];
	char pri_num[20];
	int money;
};

int main()
{
	struct employee person[3];
	
	for (int i = 0; i < 3; i++) {
		printf("이름: ");
		scanf("%s", person[i].name);
		printf("주민번호: ");
		scanf("%s", person[i].pri_num);
		printf("급여: ");
		scanf("%d", &person[i].money);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s, %s, %d \n", person[i].name, person[i].pri_num, person[i].money);
	}



	return 0;
}