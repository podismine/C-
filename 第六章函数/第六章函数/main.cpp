#include<iostream>
#include<string>

using namespace std;

string::size_type find_char(const string s, const char c, int &nums)
{
	auto ret = s.size();
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			nums++;
		}
	}
	return ret;
}
void swap(int * a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
bool check_caps(const string s)
{
	auto ss = s.size();
	for (auto i = 0; i < ss; i++)
	{
		if (islower(s[i]))
		{
			return 1;
			break;
		}
	}
	return 0;
}
void transUpper(string &s)
{
	auto ss = s.size();
	for (auto i = 0; i < ss; i++)
	{
		if (islower(s[i]))
			s[i] = toupper(s[i]);
	}
}
void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
bool reset(int *p)
{
	*p = 0;
	return 1;
}
bool reset(int &i)
{
	i = 0;
	return 1;
}

bool check_is_empty(const string &s)
{
	return s.empty();
}

int main()
{
	int a = 1, b = 2;
	//使用指针交换两个数
	swap(&a, &b);
	cout << "a:" << a << "b:" << b << endl;

	swap(a, b);
	cout << "a:" << a << "b:" << b << endl;
	//check for reset
	int *p;
	p = &a;
	bool status;
	status = reset(p);
	cout << "reset a..." << endl;
	cout << "a:" << a << "b:" << b << endl;
	
	int &b1 = b;
	status = reset(b1);
	cout << "reset b..." << endl;
	cout << "a:" << a << "b:" << b << endl;

	//计算字符串中出现某个字符的次数，返回第一次出现的位置
	string s = "bcdabca";
	int pos,num=0;

	pos = find_char(s, 'a', num);
	cout << "the pos is :" << pos << endl;
	cout << "num of occurs :" << num << endl;

	status = check_is_empty(s);
	cout << "empty of s :"<<status << endl;

	string s1 = "Anbdasd";
	bool st_s1 = check_caps(s1);
	cout << "s1 has lowers:" << st_s1 << endl;

	transUpper(s1);

	for (auto i = 0; i < s1.size(); i++)
		cout << s1[i];

	system("pause");

	return 0;
}