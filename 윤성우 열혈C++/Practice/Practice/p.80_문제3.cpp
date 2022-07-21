#include<iostream>
using namespace std;

void SwapPointer_ref(int*& ptr1, int*& ptr2) {
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void SwapPointer_ptr(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer_ref(ptr1, ptr2);
	cout << *ptr1 << ' ' << *ptr2;

	return 0;
}