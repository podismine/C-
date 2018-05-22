#include <iostream>

using namespace std;

class Hasptr
{
public:
	Hasptr(const string &s =string()) :ps(new string(s)),i(0),use(new size_t(1)){}
	Hasptr(const Hasptr& p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }
	Hasptr& operator=(const Hasptr &rhs)
	{
		++*rhs.use;
		if (--*use == 0)
		{
			delete ps;
			delete use;
		}
		ps = rhs.ps;
		use = rhs.use;
		i = rhs.i;
		return *this;
	}
	~Hasptr();
private:
	string *ps;
	int i;
	size_t *use;
};

Hasptr::~Hasptr()
{
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
}

int main()
{




	system("pause");
	return 0;
}