#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//--------------------------------------3.21
	/*vector<int> vec{ 1,2,3,4,5,6 };
	vector<int>::iterator st;
	vector<int>::iterator end;
	st = vec.begin();
	end = vec.end()-1;
	while (st != end)
	{
		cout << *st + *(st + 1) << endl;
		st++;
	}*/
	//---------------------------------------3.23
	vector<int> vec{ 1,2,3,4,5,6 };
	vector<int>::iterator st;
	st = vec.begin();
	while (st != vec.end())
	{
		*st = (*st) * 2;
		st++;
	}
	for (auto i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	system("pause");
	return 0;
}

