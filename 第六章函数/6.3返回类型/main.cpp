#include <iostream>
#include <string>
using namespace std;

int &get(int *array, int index)
{
	return array[index];
}
// check(int i )为函数
// (* check(int i))返回指针（数列）
// string (* check(int i))[10] 返回有10个string的指针函数

string (* check(int i))[10] ;
int(*check2(int i, int j))[10];
int a[]{ 1,2,3,4 };
decltype(a) *check3(int i);
decltype(a) &check4(int i);

//函数重载
int calc(int, int);
int calc(const int, const int);
//int get();
//double get();
int *reset(int *);
int &reset(double *);

constexpr void check9(int);

inline const int& isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size() ? 1 : 0;
}

int main()
{

	int ia[10];
	for (auto i = 0; i != 10; i++)
		get(ia, i) = i;

	string s1 = "abcd", s2 = "ab";
	//constexpr  int r = isShorter(s1, s2);
	int r = isShorter(s1, s2);
	cout << "s1 and s2 shorter is :" << r << endl;



	system("pause");
	return 0;
}