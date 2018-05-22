#include <iostream>
#include <vector>
using namespace std;

int main() 
{

	const char *cp = "Hello world";
	if (cp&&*cp);

	int *ptr;
	//ptr != 0 && *ptr++;

	vector<int> vec{ 1,2,3,4,5 };
	vector<int>::iterator it=vec.begin();
	*it++;
	(*it)++;
	//*it.empty();
	//it->empty();
	++*it;
	//it++->empty();

	//--------------------------------------
	int x[10];
	int *p = x;
	cout << sizeof(x)<<" "<< sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p)<<" "<<sizeof(p) / sizeof(*p) << endl;



	system("pause");
	return 0;
}