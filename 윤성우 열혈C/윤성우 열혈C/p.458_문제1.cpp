#include<stdio.h>
#include<string.h>

struct employee {
	char name[20];
	char pri_num[20];
	int money;
};

int main()
{
	struct employee person1;
	char str[20];
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;
	strcpy_s(person1.name, str);
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;
	strcpy_s(person1.pri_num, str);

	scanf_s("%d", &person1.money);

	printf("%s, %s, %d", person1.name, person1.pri_num, person1.money);
	


	return 0;
}