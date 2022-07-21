#include<iostream>

int main(void)
{
	while (true) {
		double pay = 0;
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> pay;

		if (pay == -1) {
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}

		pay = pay * 0.12 + 50;
		std::cout << "이번 달 급여: " << pay << "만원" << std::endl;
	}


	return 0;
}