#include <vector>
#include <iostream>

using namespace std;

int main()
{
	//------------------------------------3.12
	vector <vector<int>> ivc;
	//vector<int> svec = ivec; illegal
	vector<string> ssvec(10, "null");

	//------------------------------------3.13-3.16
	/*vector<int> numvec;
	for (int i = 0; i < 2; i++)
	{
		int num;
		cin >> num;
		numvec.push_back(num);
	}
	for (auto j = 0; j < numvec.size(); j++)
	{
		cout << numvec[j] << endl;
	}*/
	//------------------------------------3.17
	vector<int> v(10);
	v[0] = 1;

	//------------------------------------3.20
	vector<int> numvec;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		numvec.push_back(num);
	}
	int i = 0;
	int j = numvec.size() - 1;
	while (i<j)
	{
		cout << numvec[i] + numvec[j] << endl;
		i++;
		j--; 
	}

	system("pause");
	return 0;
}

