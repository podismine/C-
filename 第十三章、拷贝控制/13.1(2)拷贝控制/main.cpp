#include <iostream>

using namespace std;
static int i=0;
class Employee
{
public:

	Employee():id(i++){}
	Employee(Employee& ee) { id = ee.id + 1; }
	string s;
	int id;
	
};
void show(Employee e)
{
	cout << e.id << endl;
}
class Hasptr
{
public:
	Hasptr() = default;
	Hasptr(const Hasptr&p):ps(new string(*p.ps)),i(i){}
	Hasptr& operator=(const Hasptr&hsr)
	{
		string *newP = new string(*hsr.ps);
		delete ps;
		ps = newP;
		i = hsr.i;
		return *this;



	}
	~Hasptr() { delete ps; }

private:
	string *ps;
	int i;
};
int main()
{
	Employee a, b = a, c = b;
	show(a);
	show(b);
	show(c);

	system("pause");
	return 0;
}