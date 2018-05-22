#include <iostream>

using namespace std;

int txt_size()
{
	return 10;
}
int main()
{
	unsigned buf_size = 1024;
	//int ia[buf_size];
	int ia[4 * 7 - 14];

	//int ia[txt_size()];
	char st[11] = "abcdefghij";
	//--------------------------
	const size_t array_size = 10;
	int isa[array_size];
	//---------------------------

	int a[3] = { 1,2,3 };
	int *p1 = a;
	int *p2 = &a[2];

	p1 += p2 - p1;
	cout << p1 << " -----  " << *p1 << endl;

	system("pause");
	return 0;
}