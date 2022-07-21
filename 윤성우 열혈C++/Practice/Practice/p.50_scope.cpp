#include<iostream>
using std::cout;
using std::endl;

int val = 100;

int SimpleFunc(void)
{
	int val = 20;
	val += 3;
	::val += 7;

	return val;
}

int main(void)
{
	cout << SimpleFunc() << endl;
	cout << val << endl;

	return 0;
}