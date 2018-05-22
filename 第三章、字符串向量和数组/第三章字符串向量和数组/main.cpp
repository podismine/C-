#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string line;
	////读入一word
	//
	//while (cin >> line)
	//{
	//	if (line.size() > 2)
	//		cout << line << endl;
	//}

	//读入一行
	/*char c;
	string word;
	while (getline(cin,word))
	{
		cout << word << endl;;
	}*/
	//------------------------------------------练习3.2----------

	//string s1, s2;
	//cin >> s1;
	//cin >> s2;
	//if (s1.size() > s2.size())
	//{
	//	cout << s1 << endl;
	//}
	//else
	//{
	//	cout << s2 <<endl;
	//}

	//------------------------------------------练习3.3-----------

	/*string s, out;
	while (cin>>s)
	{
		out += s;
	}*/
	//-------------------------------------------------3.6
	/*string passwrd;
	while (cin >> passwrd)
	{
		for (auto i = 0; i < passwrd.size(); i++)
		{
			if (isalpha(passwrd[i]))
			{
				passwrd[i] = 'X';
			}
		}
		cout << passwrd << endl;
	}*/

	//-------------------------------------------------3.7
	string s;
	cout << s[0] << endl;

	const string s1 = "Keep out!";
	for (auto &c : s1)
	{
		cout << c << endl;
	}
	system("pause");
	return 0;
}