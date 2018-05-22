#include <iostream>

using namespace std;

int main()
{
	int ival = 42;
	//illegal
	//int &rval = 1.01;
	int &rval2 = ival;
	//illegal
	//int &rval3;
	ival = 3;
	rval2 = 10;
	cout << ival << " " << rval2 << endl;
	//----------------------------------------
	int i = 42;
	void *p = &i;
	//long *lp = &i;
	int *lp = &i;
	system("pause");
	return 0;
}