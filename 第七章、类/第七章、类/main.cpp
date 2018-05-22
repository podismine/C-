#include <iostream>
#include <string>


using namespace std;

class Person
{
	friend ostream &print(ostream &os, Person &p);
public:
	//成员函数
	Person() = default;
	Person(string s):name(s){}
	Person(ostream &os, const Person p) { print(cout, *this); }
	const string get_name() const { return this->name; }
	const string get_addr() const { return this->addr; }
	//非成员函数
	
	

private:
	string name="pod";
	string addr="Shenzhen, China";

};
ostream &print(ostream &os, Person &p)
{
	os << p.get_name() << p.get_addr() << endl;
	return os;
}
int main()
{
	Person p;
	cout << p.get_name() << endl;
	cout << p.get_addr() << endl;

	system("pause");
	return 0;
}
