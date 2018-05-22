#include <iostream>
#include <string>
#include <vector>
using namespace std;



//
//int ff1(const int,const int);
//typedef decltype(ff1) fp;
//vector<fp*>vf2;

inline int Numadd(const int n1, const int n2) { return n1 + n2; }
inline int Numsub(const int n1, const int n2) { return n1 - n2; }
inline int Nummul(const int n1, const int n2) { return n1 * n2; }
inline int Numdiv(const int n1, const int n2) { return n1 / n2; }
typedef decltype(Numadd) pp;
vector <pp*> vv{ Numadd,Numsub,Nummul,Numdiv };

int main()
{
	//--------------------------------context of book---------------
	//using F = int(int, int);
	//using pf = int(*)(int, int);
	////F f1(int);
	//F *f1(int);
	//pf f2(int);
	//int (*f1(int))(int, int);


	//typedef bool func(const string&, const string &);
	//---------------------------------practise---------------------
	

	for (vector<pp*>::iterator it = vv.begin(); it != vv.end(); it++)
	{
		cout << (*it)(2, 2) << endl;
	}
	system("pause");
	return 0;
}