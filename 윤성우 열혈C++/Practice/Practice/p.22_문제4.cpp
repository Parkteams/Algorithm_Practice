#include<iostream>

int main(void)
{
	while (true) {
		double pay = 0;
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> pay;

		if (pay == -1) {
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;
		}

		pay = pay * 0.12 + 50;
		std::cout << "�̹� �� �޿�: " << pay << "����" << std::endl;
	}


	return 0;
}