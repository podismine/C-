#include <iostream>
#include <string>

using namespace std;
ostream &print(ostream &os, const Sales_data &item);

struct Sales_data
{
	Sales_data() = default;
	Sales_data(const string s) :bookNo(s){}
	Sales_data(ostream &os, const Sales_data &item) { print(cout, *this); }
	string bookNo;
	double price = 0.0;
};
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.price << " ";
	return os;
}
int main()
{
	Sales_data s;
	print(cout, s) << endl;;


	system("pause");
	return 0;
}