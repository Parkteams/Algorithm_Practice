#include<iostream>
using namespace std;

template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int main(void) 
{
	cout << SQUARE(5.5) << endl;


	return 0;
}