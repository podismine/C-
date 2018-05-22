#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
public:
	HasPtr(const std::string &s=string()):ps(new string(s)),i(0){}
	HasPtr(const HasPtr& HP) :ps(HP.ps), i(HP.i) {}
	HasPtr& operator=(const HasPtr& hp)
	{
		i = hp.i;
		ps = hp.ps;
	}
	~HasPtr(){}

private:
	string *ps;
	int i;
};
class numbered
{
public:
	numbered(int j):i(j){}
	//numbered() { cout << "constructor" <<i<< endl; }
	//numbered(const numbered &){}
	numbered(numbered & n) { i = n.i + 1; }
	int i;

};
void f(numbered &s)
{
	cout << s.i << endl;
}
int main()
{
	numbered a(2), b = a, c = b;

	f(a);
	f(b);
	f(c);

	system("pause");
	return 0;
}