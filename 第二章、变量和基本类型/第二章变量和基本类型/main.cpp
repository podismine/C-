#include <iostream>
using namespace std;
int main()
{
	int i1 = 10;
	long double d = 65555.9292921;
	cout << " i:" << i1 << " d:" << d <<endl;
	//
	unsigned u = 10, u2 = 42;

	int i = 10, i2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u2 << endl;
	cout << u - i << endl;
	system("pause");
	return 0;
}